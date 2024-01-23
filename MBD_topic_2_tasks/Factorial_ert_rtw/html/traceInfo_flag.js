function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["Factorial.c:106c25"]=1;
    this.traceFlag["Factorial.c:108c32"]=1;
    this.traceFlag["Factorial.c:113c29"]=1;
    this.traceFlag["Factorial.c:113c44"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["Factorial.c:105"]=1;
    this.lineTraceFlag["Factorial.c:106"]=1;
    this.lineTraceFlag["Factorial.c:107"]=1;
    this.lineTraceFlag["Factorial.c:108"]=1;
    this.lineTraceFlag["Factorial.c:109"]=1;
    this.lineTraceFlag["Factorial.c:113"]=1;
    this.lineTraceFlag["Factorial.c:120"]=1;
    this.lineTraceFlag["Factorial.c:125"]=1;
    this.lineTraceFlag["Factorial.c:144"]=1;
    this.lineTraceFlag["Factorial.c:151"]=1;
    this.lineTraceFlag["Factorial.h:38"]=1;
    this.lineTraceFlag["Factorial.h:43"]=1;
    this.lineTraceFlag["Factorial.h:48"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
