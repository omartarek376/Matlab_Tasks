function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "is_even_or_odd"};
	this.sidHashMap["is_even_or_odd"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "is_even_or_odd:3"};
	this.sidHashMap["is_even_or_odd:3"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Input"] = {sid: "is_even_or_odd:7"};
	this.sidHashMap["is_even_or_odd:7"] = {rtwname: "<Root>/Input"};
	this.rtwnameHashMap["<Root>/Is_Even"] = {sid: "is_even_or_odd:3"};
	this.sidHashMap["is_even_or_odd:3"] = {rtwname: "<Root>/Is_Even"};
	this.rtwnameHashMap["<Root>/y"] = {sid: "is_even_or_odd:4"};
	this.sidHashMap["is_even_or_odd:4"] = {rtwname: "<Root>/y"};
	this.rtwnameHashMap["<S1>:1"] = {sid: "is_even_or_odd:3:1"};
	this.sidHashMap["is_even_or_odd:3:1"] = {rtwname: "<S1>:1"};
	this.rtwnameHashMap["<S1>:1:2"] = {sid: "is_even_or_odd:3:1:2"};
	this.sidHashMap["is_even_or_odd:3:1:2"] = {rtwname: "<S1>:1:2"};
	this.rtwnameHashMap["<S1>:1:3"] = {sid: "is_even_or_odd:3:1:3"};
	this.sidHashMap["is_even_or_odd:3:1:3"] = {rtwname: "<S1>:1:3"};
	this.rtwnameHashMap["<S1>:1:5"] = {sid: "is_even_or_odd:3:1:5"};
	this.sidHashMap["is_even_or_odd:3:1:5"] = {rtwname: "<S1>:1:5"};
	this.rtwnameHashMap["<S1>:1:6"] = {sid: "is_even_or_odd:3:1:6"};
	this.sidHashMap["is_even_or_odd:3:1:6"] = {rtwname: "<S1>:1:6"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
