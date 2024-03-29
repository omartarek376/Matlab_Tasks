function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "if_grading_system"};
	this.sidHashMap["if_grading_system"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "if_grading_system:30"};
	this.sidHashMap["if_grading_system:30"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "if_grading_system:6"};
	this.sidHashMap["if_grading_system:6"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "if_grading_system:10"};
	this.sidHashMap["if_grading_system:10"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<S4>"] = {sid: "if_grading_system:14"};
	this.sidHashMap["if_grading_system:14"] = {rtwname: "<S4>"};
	this.rtwnameHashMap["<S5>"] = {sid: "if_grading_system:18"};
	this.sidHashMap["if_grading_system:18"] = {rtwname: "<S5>"};
	this.rtwnameHashMap["<Root>/Input"] = {sid: "if_grading_system:2"};
	this.sidHashMap["if_grading_system:2"] = {rtwname: "<Root>/Input"};
	this.rtwnameHashMap["<Root>/Grading"] = {sid: "if_grading_system:30"};
	this.sidHashMap["if_grading_system:30"] = {rtwname: "<Root>/Grading"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "if_grading_system:26"};
	this.sidHashMap["if_grading_system:26"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<S1>/Input"] = {sid: "if_grading_system:31"};
	this.sidHashMap["if_grading_system:31"] = {rtwname: "<S1>/Input"};
	this.rtwnameHashMap["<S1>/If"] = {sid: "if_grading_system:1"};
	this.sidHashMap["if_grading_system:1"] = {rtwname: "<S1>/If"};
	this.rtwnameHashMap["<S1>/If Action Subsystem"] = {sid: "if_grading_system:6"};
	this.sidHashMap["if_grading_system:6"] = {rtwname: "<S1>/If Action Subsystem"};
	this.rtwnameHashMap["<S1>/If Action Subsystem1"] = {sid: "if_grading_system:10"};
	this.sidHashMap["if_grading_system:10"] = {rtwname: "<S1>/If Action Subsystem1"};
	this.rtwnameHashMap["<S1>/If Action Subsystem2"] = {sid: "if_grading_system:14"};
	this.sidHashMap["if_grading_system:14"] = {rtwname: "<S1>/If Action Subsystem2"};
	this.rtwnameHashMap["<S1>/If Action Subsystem3"] = {sid: "if_grading_system:18"};
	this.sidHashMap["if_grading_system:18"] = {rtwname: "<S1>/If Action Subsystem3"};
	this.rtwnameHashMap["<S1>/Merge"] = {sid: "if_grading_system:29"};
	this.sidHashMap["if_grading_system:29"] = {rtwname: "<S1>/Merge"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "if_grading_system:32"};
	this.sidHashMap["if_grading_system:32"] = {rtwname: "<S1>/Out1"};
	this.rtwnameHashMap["<S2>/Action Port"] = {sid: "if_grading_system:8"};
	this.sidHashMap["if_grading_system:8"] = {rtwname: "<S2>/Action Port"};
	this.rtwnameHashMap["<S2>/String Constant"] = {sid: "if_grading_system:22"};
	this.sidHashMap["if_grading_system:22"] = {rtwname: "<S2>/String Constant"};
	this.rtwnameHashMap["<S2>/Out1"] = {sid: "if_grading_system:9"};
	this.sidHashMap["if_grading_system:9"] = {rtwname: "<S2>/Out1"};
	this.rtwnameHashMap["<S3>/Action Port"] = {sid: "if_grading_system:12"};
	this.sidHashMap["if_grading_system:12"] = {rtwname: "<S3>/Action Port"};
	this.rtwnameHashMap["<S3>/String Constant"] = {sid: "if_grading_system:23"};
	this.sidHashMap["if_grading_system:23"] = {rtwname: "<S3>/String Constant"};
	this.rtwnameHashMap["<S3>/Out1"] = {sid: "if_grading_system:13"};
	this.sidHashMap["if_grading_system:13"] = {rtwname: "<S3>/Out1"};
	this.rtwnameHashMap["<S4>/Action Port"] = {sid: "if_grading_system:16"};
	this.sidHashMap["if_grading_system:16"] = {rtwname: "<S4>/Action Port"};
	this.rtwnameHashMap["<S4>/String Constant"] = {sid: "if_grading_system:24"};
	this.sidHashMap["if_grading_system:24"] = {rtwname: "<S4>/String Constant"};
	this.rtwnameHashMap["<S4>/Out1"] = {sid: "if_grading_system:17"};
	this.sidHashMap["if_grading_system:17"] = {rtwname: "<S4>/Out1"};
	this.rtwnameHashMap["<S5>/Action Port"] = {sid: "if_grading_system:20"};
	this.sidHashMap["if_grading_system:20"] = {rtwname: "<S5>/Action Port"};
	this.rtwnameHashMap["<S5>/String Constant"] = {sid: "if_grading_system:25"};
	this.sidHashMap["if_grading_system:25"] = {rtwname: "<S5>/String Constant"};
	this.rtwnameHashMap["<S5>/Out1"] = {sid: "if_grading_system:21"};
	this.sidHashMap["if_grading_system:21"] = {rtwname: "<S5>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
