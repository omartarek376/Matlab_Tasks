function TraceInfoFlag() {
    this.traceFlag = new Array();
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["array_task.c:37"]=1;
    this.lineTraceFlag["array_task.c:42"]=1;
    this.lineTraceFlag["array_task.c:47"]=1;
    this.lineTraceFlag["array_task.c:52"]=1;
    this.lineTraceFlag["array_task.c:64"]=1;
    this.lineTraceFlag["array_task.h:38"]=1;
    this.lineTraceFlag["array_task.h:43"]=1;
    this.lineTraceFlag["array_task.h:44"]=1;
    this.lineTraceFlag["array_task.h:45"]=1;
    this.lineTraceFlag["array_task.h:46"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
