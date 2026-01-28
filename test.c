// Accepted
__attribute__((target("+sme"))) void ok1(void) __arm_streaming {}
__attribute__((target("+sme"))) __arm_locally_streaming void ok2(void) {}

// Rejected
__attribute__((target("+sme"))) __arm_streaming void bad1(void) {}
__attribute__((target("+sme"))) void bad2(void) __arm_locally_streaming {}
