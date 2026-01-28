// Accepted
__attribute__((target("+sme"))) void ok1() __arm_streaming {}
__attribute__((target("+sme"))) __arm_locally_streaming void ok2() {}

// Rejected
__attribute__((target("+sme"))) __arm_streaming void bad1() {}
__attribute__((target("+sme"))) void bad2() __arm_locally_streaming {}
