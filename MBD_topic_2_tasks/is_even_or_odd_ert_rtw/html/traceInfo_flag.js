function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["is_even_or_odd.c:37c30"]=1;
    this.traceFlag["is_even_or_odd.c:37c57"]=1;
    this.traceFlag["is_even_or_odd.c:37c63"]=1;
    this.traceFlag["is_even_or_odd.c:37c69"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["is_even_or_odd.c:37"]=1;
    this.lineTraceFlag["is_even_or_odd.c:40"]=1;
    this.lineTraceFlag["is_even_or_odd.c:47"]=1;
    this.lineTraceFlag["is_even_or_odd.c:64"]=1;
    this.lineTraceFlag["is_even_or_odd.h:37"]=1;
    this.lineTraceFlag["is_even_or_odd.h:42"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
