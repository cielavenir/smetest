// Accepted
void ok1() __arm_streaming {}
__arm_locally_streaming void ok2() {}

// Rejected
__arm_streaming void bad1() {}
void bad2() __arm_locally_streaming {}
