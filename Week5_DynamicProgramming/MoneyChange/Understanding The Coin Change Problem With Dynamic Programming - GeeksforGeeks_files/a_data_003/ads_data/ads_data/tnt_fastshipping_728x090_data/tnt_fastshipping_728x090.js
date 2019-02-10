(function (cjs, an) {

var p; // shortcut to reference prototypes
var lib={};var ss={};var img={};
lib.ssMetadata = [];


// symbols:
// helper functions:

function mc_symbol_clone() {
	var clone = this._cloneProps(new this.constructor(this.mode, this.startPosition, this.loop));
	clone.gotoAndStop(this.currentFrame);
	clone.paused = this.paused;
	clone.framerate = this.framerate;
	return clone;
}

function getMCSymbolPrototype(symbol, nominalBounds, frameBounds) {
	var prototype = cjs.extend(symbol, cjs.MovieClip);
	prototype.clone = mc_symbol_clone;
	prototype.nominalBounds = nominalBounds;
	prototype.frameBounds = frameBounds;
	return prototype;
	}


(lib.mc_cta = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// timeline functions:
	this.frame_0 = function() {
		/* Fill this data per textfield */
		theMaxHeight = 25;
		theMaxWidth = 165;
		theMaxFontSize = 50;
		targetTextField = this.cta_tf;
		
		/* Start functionalities to copy */
		function setFontSize(textfieldName) {
			textfieldName.font=theMaxFontSize+"px 'Museo Sans 700'";
			textfieldName.lineHeight=theMaxFontSize+4;
			textfieldWidth=textfieldName.getBounds().width;
			textfieldHeight=textfieldName.getBounds().height;
		}
		setFontSize(targetTextField);
		while (textfieldHeight > theMaxHeight || textfieldWidth > theMaxWidth) {
			theMaxFontSize-=1;
		    setFontSize(targetTextField);	
		}
		/* End functionalities to copy */
	}

	// actions tween:
	this.timeline.addTween(cjs.Tween.get(this).call(this.frame_0).wait(1));

	// Layer 1
	this.cta_tf = new cjs.Text("My business needs TNT", "14px 'Museo Sans 700'", "#FFFFFF");
	this.cta_tf.name = "cta_tf";
	this.cta_tf.textAlign = "center";
	this.cta_tf.lineHeight = 19;
	this.cta_tf.lineWidth = 162;
	this.cta_tf.parent = this;
	this.cta_tf.setTransform(-11.7,-9.6);

	this.shape = new cjs.Shape();
	this.shape.graphics.f("#1BB3F4").s().rr(-100,-20,200,40,2);
	this.shape.setTransform(-12.3,0,0.855,1);

	this.timeline.addTween(cjs.Tween.get({}).to({state:[{t:this.shape},{t:this.cta_tf}]}).wait(1));

}).prototype = getMCSymbolPrototype(lib.mc_cta, new cjs.Rectangle(-97.7,-20,170.9,40), null);


(lib.g_van_top = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer 1
	this.shape = new cjs.Shape();
	this.shape.graphics.f("#DCDCDC").s().p("AlCF/QAAj2A6ivQAchTAthbQAvhdAngwIGsjWIAADrIgOAHQh8A+hbCyQhaCtAACoQAABUAbA8IlNCoQgUhTAAhmg");
	this.shape.setTransform(106.3,45.5,0.5,0.5);

	this.shape_1 = new cjs.Shape();
	this.shape_1.graphics.f("#BD551D").s().p("AqmEzIVNqnIAABDI1NKlg");
	this.shape_1.setTransform(88.5,73.5,0.5,0.5);

	this.shape_2 = new cjs.Shape();
	this.shape_2.graphics.f("#333F48").s().p("ADTCxIj+iHQiahPhHgoQgQgJgDgLIgBgKIAXhPIAAADQADAHAIAEIHsEHQAYANAbgFIgYBWQgGACgJAAIgCAAQgSAAgTgKg");
	this.shape_2.setTransform(17.1,67,0.5,0.5);

	this.shape_3 = new cjs.Shape();
	this.shape_3.graphics.f("#505960").s().p("ADRC1Ij9iIIjlh4QgFgDgFgOIgDgMIAWhCIgCgGIAAgHIAAgEIADgDIInEkIgZBWQgFADgKAAIgBAAQgSAAgUgKg");
	this.shape_3.setTransform(17.2,66.8,0.5,0.5);

	this.shape_4 = new cjs.Shape();
	this.shape_4.graphics.f("#333F48").s().p("AifhJIgFgWIFJCuIgHARg");
	this.shape_4.setTransform(13.3,92.6,0.5,0.5);

	this.shape_5 = new cjs.Shape();
	this.shape_5.graphics.f("#333F48").s().p("AiohOIgFgWIFbC5IgHAQg");
	this.shape_5.setTransform(13.3,91.1,0.5,0.5);

	this.shape_6 = new cjs.Shape();
	this.shape_6.graphics.f("#333F48").s().p("AjdhrIAAgUIG6DsIAAATg");
	this.shape_6.setTransform(13.6,89.9,0.5,0.5);

	this.shape_7 = new cjs.Shape();
	this.shape_7.graphics.f("#333F48").s().p("AjdhsIAAgTIG6DrIAAAUg");
	this.shape_7.setTransform(13.6,88.5,0.5,0.5);

	this.shape_8 = new cjs.Shape();
	this.shape_8.graphics.f("#333F48").s().p("Aing0IAAhJIFPCyIAABJg");
	this.shape_8.setTransform(12.8,98.6,0.5,0.5);

	this.shape_9 = new cjs.Shape();
	this.shape_9.graphics.f("#465059").s().p("ACcC1IlMiyQAAAAgBAAQAAgBAAAAQgBAAAAgBQAAAAAAgBIgOg5IgDgDIglgUQgDgCAAgDIAAhbQAAgDACgBQADgBACABIHOD1QACACAAADIAABbQAAABAAAAQAAABAAAAQgBABAAAAQgBABAAAAQgBABAAAAQgBAAgBAAQAAAAgBAAQAAAAgBgBIgrgXQgFgCgCAEIgQAjQgBAAAAABQAAABgBAAQAAAAgBABQAAAAgBAAIgDgBg");
	this.shape_9.setTransform(13.6,89.2,0.5,0.5);

	this.shape_10 = new cjs.Shape();
	this.shape_10.graphics.f("#DCDCDC").s().p("ADgC1Ij+iHQichRhIgoQgMgHgEgNIgDgLIAAhUQADAHAIAEIDuCBIEACIQAYAMAagFIAABgQgGACgJAAIgCAAQgSAAgTgKg");
	this.shape_10.setTransform(13.9,98.4,0.5,0.5);

	this.shape_11 = new cjs.Shape();
	this.shape_11.graphics.f("#F58D4E").s().p("Ai1BYIFliyIAGADIllCyg");
	this.shape_11.setTransform(39.1,63.8,0.5,0.5);

	this.shape_12 = new cjs.Shape();
	this.shape_12.graphics.f("#F58D4E").s().p("Ai1BXIFlixIAGADIllCyg");
	this.shape_12.setTransform(36.6,62.5,0.5,0.5);

	this.shape_13 = new cjs.Shape();
	this.shape_13.graphics.f("#F58D4E").s().p("Ai1BYIFliyIAGADIlkCyg");
	this.shape_13.setTransform(34.1,61.1,0.5,0.5);

	this.shape_14 = new cjs.Shape();
	this.shape_14.graphics.f("#F58D4E").s().p("Ai1BYIFliyIAGADIllCyg");
	this.shape_14.setTransform(31.6,59.8,0.5,0.5);

	this.shape_15 = new cjs.Shape();
	this.shape_15.graphics.f("#F58D4E").s().p("Ai1BYIFliyIAGADIlkCyg");
	this.shape_15.setTransform(29.1,58.5,0.5,0.5);

	this.shape_16 = new cjs.Shape();
	this.shape_16.graphics.f("#F58D4E").s().p("Ai1BYIFkiyIAHADIllCyg");
	this.shape_16.setTransform(26.7,57.2,0.5,0.5);

	this.shape_17 = new cjs.Shape();
	this.shape_17.graphics.f("#F58D4E").s().p("Ai1BYIFliyIAGADIlkCyg");
	this.shape_17.setTransform(24.2,55.9,0.5,0.5);

	this.shape_18 = new cjs.Shape();
	this.shape_18.graphics.f("#F58D4E").s().p("Ai1BYIFliyIAGADIlkCyg");
	this.shape_18.setTransform(21.7,54.5,0.5,0.5);

	this.shape_19 = new cjs.Shape();
	this.shape_19.graphics.f("#F58D4E").s().p("Ai1BYIFliyIAGADIllCyg");
	this.shape_19.setTransform(19.2,53.2,0.5,0.5);

	this.shape_20 = new cjs.Shape();
	this.shape_20.graphics.f("#F58D4E").s().p("Ai1BXIFlixIAGADIlkCyg");
	this.shape_20.setTransform(16.8,51.9,0.5,0.5);

	this.shape_21 = new cjs.Shape();
	this.shape_21.graphics.f("#3B454C").s().p("AABAfIgBgBIAAgeIAAgCIgCgEIgKgMIgBgDQAAgHAGgDQAAgBABAAQABAAAAAAQABAAAAAAQAAAAABABIAPATQACAEgBAEIAAAiQgBADgFAAQgDAAgDgCg");
	this.shape_21.setTransform(33.9,72.3,0.5,0.5);

	this.shape_22 = new cjs.Shape();
	this.shape_22.graphics.f("#566168").s().p("AgjgLIAQgHIA2AeIgPAGg");
	this.shape_22.setTransform(34.4,74,0.5,0.5);

	this.shape_23 = new cjs.Shape();
	this.shape_23.graphics.f("#2D353A").s().p("AgHhNIAPgHIAACiIgPAHg");
	this.shape_23.setTransform(35.8,78.8,0.5,0.5);

	this.shape_24 = new cjs.Shape();
	this.shape_24.graphics.f("#333F48").s().p("AgbBDIAAijIA3AeIAACjg");
	this.shape_24.setTransform(34.1,78.2,0.5,0.5);

	this.shape_25 = new cjs.Shape();
	this.shape_25.graphics.f("#3B454C").s().p("AAJA0IgDgBIgYgNIgBgEQAAgHAEgCIADAAIASAKIAAhUIAHgDIAHADIAABdQAAAIgGABIgCAAIgDgBg");
	this.shape_25.setTransform(33.5,83.4,0.5,0.5);

	this.shape_26 = new cjs.Shape();
	this.shape_26.graphics.f("#2D353A").s().p("AgMAAIAZgMIAAAZg");
	this.shape_26.setTransform(37.3,103.4,0.5,0.5);

	this.shape_27 = new cjs.Shape();
	this.shape_27.graphics.f("#999999").s().p("AiOCuQgFgEADgMIA0jKQADgMAKgMQALgMALgGICxhWQALgFAIAFQAIAFgBAMIgDCIQAAANgIAMQgHANgLAHIjzCSQgHAEgEAAQgBAAAAgBQgBAAgBAAQAAAAgBAAQAAgBgBAAg");
	this.shape_27.setTransform(36.7,77.1,0.5,0.5);

	this.shape_28 = new cjs.Shape();
	this.shape_28.graphics.f("#BD551D").s().p("Aj7B2IH4j5IAAALIn4D8g");
	this.shape_28.setTransform(40.3,86.2,0.5,0.5);

	this.shape_29 = new cjs.Shape();
	this.shape_29.graphics.f("#CA561B").s().p("Aj7EbQgBjNADgYQADgZAjiDIAliJQAJghAagNIGHjEIAAJ3Ig1g+IiwBYIhGBVIAAB4IjKBlIgCjHg");
	this.shape_29.setTransform(40.3,83.7,0.5,0.5);

	this.shape_30 = new cjs.Shape();
	this.shape_30.graphics.f("#333F48").s().p("AifAOIBHhUICwhYIBIBUIAABzIgSAIIAAhyIg6hEIilBTIg8BIIAACBIgSAIg");
	this.shape_30.setTransform(45.9,96.1,0.5,0.5);

	this.shape_31 = new cjs.Shape();
	this.shape_31.graphics.f("#E7E7E7").s().p("ADgC6IjXhyIkOiQQgGgDgEgNIgDgNIAAhKIgDgGIAAgHIABgEIACgEIIoEmIAABgQgGACgJAAIgCABQgSAAgTgLg");
	this.shape_31.setTransform(13.9,98.2,0.5,0.5);

	this.shape_32 = new cjs.Shape();
	this.shape_32.graphics.f("#999999").s().p("ADHEaQgNAAgJgEQgjgOjGhqQjHhrgUgPQgFgEgDgGQgDgFAAgCIBFkjQABgGAFgCQAFgCAGACIHhEBQADACACAGQABAFgBAFIhKEcQAAADgKAAIgDAAg");
	this.shape_32.setTransform(15.6,72.4,0.5,0.5);

	this.shape_33 = new cjs.Shape();
	this.shape_33.graphics.f("#333F48").s().p("ADWCpInCjxQgMgGAAgOIAAgiQgBgDAIgWQAHgWADACIHND1IATA7IAAAYQAAAHgKAFQgGADgGAAQgHAAgGgDg");
	this.shape_33.setTransform(13.8,79.7,0.5,0.5);

	this.shape_34 = new cjs.Shape();
	this.shape_34.graphics.f("#FD7228").s().p("AoNFSIAAhwQgGi7AGhaQADgvAeh4IAsiiQADgLAMgPQALgOAKgFIGFjIIIoEnImQDYIgHAKIgrCNQgsCWgFArQgIBEAJFIg");
	this.shape_34.setTransform(26.5,76.2,0.5,0.5);

	this.shape_35 = new cjs.Shape();
	this.shape_35.graphics.f("#566168").s().p("AgjgKIAQgHIA2AcIgPAHg");
	this.shape_35.setTransform(3.2,57.7,0.5,0.5);

	this.shape_36 = new cjs.Shape();
	this.shape_36.graphics.f("#414A51").s().p("AgHhNIAOgHIAACiIgOAHg");
	this.shape_36.setTransform(4.6,62.5,0.5,0.5);

	this.shape_37 = new cjs.Shape();
	this.shape_37.graphics.f("#333F48").s().p("AgbBCIAAiiIA3AeIAACjg");
	this.shape_37.setTransform(2.8,61.9,0.5,0.5);

	this.shape_38 = new cjs.Shape();
	this.shape_38.graphics.f("#414A51").s().p("AhqgQICfhQIA2A+IAACCg");
	this.shape_38.setTransform(47.7,93.7,0.5,0.5);

	this.shape_39 = new cjs.Shape();
	this.shape_39.graphics.f("#F57D38").s().p("AvmCpIVNqmIKAFWI1NKlg");
	this.shape_39.setTransform(72.5,25.5,0.5,0.5);

	this.shape_40 = new cjs.Shape();
	this.shape_40.graphics.f("#CA561B").s().p("AqmhHIVNqnIAAM2I1NKng");
	this.shape_40.setTransform(88.5,54.6,0.5,0.5);

	this.shape_41 = new cjs.Shape();
	this.shape_41.graphics.f("#FC6621").s().p("Ak/DxIAAs2IJ/FVIAAM2g");
	this.shape_41.setTransform(38.6,63.1,0.5,0.5);

	this.shape_42 = new cjs.Shape();
	this.shape_42.graphics.f("#E7E7E7").s().p("AiFg6IAcgPIDvCFIgcANg");
	this.shape_42.setTransform(112.4,59.1,0.5,0.5);

	this.shape_43 = new cjs.Shape();
	this.shape_43.graphics.f("#C7C7C7").s().p("AgNgqIAbgOIAABjIgbAOg");
	this.shape_43.setTransform(118.4,64.9,0.5,0.5);

	this.shape_44 = new cjs.Shape();
	this.shape_44.graphics.f("#DCDCDC").s().p("Ah3gPIAAhkIDvCDIAABlg");
	this.shape_44.setTransform(111.7,62,0.5,0.5);

	this.shape_45 = new cjs.Shape();
	this.shape_45.graphics.f("#2D353A").s().p("AlHA3IG9jeIDSBxIm9Deg");
	this.shape_45.setTransform(62,82.3,0.5,0.5);

	this.shape_46 = new cjs.Shape();
	this.shape_46.graphics.f("#505960").s().p("AjeAoIG9jeIAACPIm9Deg");
	this.shape_46.setTransform(67.3,88.7,0.5,0.5);

	this.shape_47 = new cjs.Shape();
	this.shape_47.graphics.f("#414A51").s().p("AhoAPIAAiOIDRBxIAACOg");
	this.shape_47.setTransform(50.9,91.4,0.5,0.5);

	this.timeline.addTween(cjs.Tween.get({}).to({state:[{t:this.shape_47},{t:this.shape_46},{t:this.shape_45},{t:this.shape_44},{t:this.shape_43},{t:this.shape_42},{t:this.shape_41},{t:this.shape_40},{t:this.shape_39},{t:this.shape_38},{t:this.shape_37},{t:this.shape_36},{t:this.shape_35},{t:this.shape_34},{t:this.shape_33},{t:this.shape_32},{t:this.shape_31},{t:this.shape_30},{t:this.shape_29},{t:this.shape_28},{t:this.shape_27},{t:this.shape_26},{t:this.shape_25},{t:this.shape_24},{t:this.shape_23},{t:this.shape_22},{t:this.shape_21},{t:this.shape_20},{t:this.shape_19},{t:this.shape_18},{t:this.shape_17},{t:this.shape_16},{t:this.shape_15},{t:this.shape_14},{t:this.shape_13},{t:this.shape_12},{t:this.shape_11},{t:this.shape_10},{t:this.shape_9},{t:this.shape_8},{t:this.shape_7},{t:this.shape_6},{t:this.shape_5},{t:this.shape_4},{t:this.shape_3},{t:this.shape_2},{t:this.shape_1},{t:this.shape}]}).wait(1));

}).prototype = p = new cjs.MovieClip();
p.nominalBounds = new cjs.Rectangle(0,0,122.5,108);


(lib.g_van_grey = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer 1
	this.shape = new cjs.Shape();
	this.shape.graphics.f("#999999").s().p("AqmEzIVNqnIAABDI1NKlg");
	this.shape.setTransform(177,147.1);

	this.shape_1 = new cjs.Shape();
	this.shape_1.graphics.f("#333F48").s().p("ADTCxIj+iHQiahPhHgoQgQgJgDgLIgBgKIAXhPIAAADQADAHAIAEIHsEHQAYANAbgFIgYBWQgGACgJAAIgCAAQgSAAgTgKg");
	this.shape_1.setTransform(34.2,133.9);

	this.shape_2 = new cjs.Shape();
	this.shape_2.graphics.f("#505960").s().p("ADRC1Ij9iIIjlh4QgFgDgFgOIgDgMIAWhCIgCgGIAAgHIAAgEIADgDIInEkIgZBWQgFADgKAAIgBAAQgSAAgUgKg");
	this.shape_2.setTransform(34.4,133.6);

	this.shape_3 = new cjs.Shape();
	this.shape_3.graphics.f("#333F48").s().p("AifhJIgFgWIFJCuIgHARg");
	this.shape_3.setTransform(26.5,185.3);

	this.shape_4 = new cjs.Shape();
	this.shape_4.graphics.f("#333F48").s().p("AiohOIgFgWIFbC5IgHAQg");
	this.shape_4.setTransform(26.6,182.3);

	this.shape_5 = new cjs.Shape();
	this.shape_5.graphics.f("#333F48").s().p("AjdhrIAAgUIG6DsIAAATg");
	this.shape_5.setTransform(27.2,179.8);

	this.shape_6 = new cjs.Shape();
	this.shape_6.graphics.f("#333F48").s().p("AjdhsIAAgTIG6DrIAAAUg");
	this.shape_6.setTransform(27.2,177);

	this.shape_7 = new cjs.Shape();
	this.shape_7.graphics.f("#333F48").s().p("Aing0IAAhJIFPCyIAABJg");
	this.shape_7.setTransform(25.7,197.1);

	this.shape_8 = new cjs.Shape();
	this.shape_8.graphics.f("#465059").s().p("ACcC1IlMiyQAAAAgBAAQAAgBAAAAQgBAAAAgBQAAAAAAgBIgOg5IgDgDIglgUQgDgCAAgDIAAhbQAAgDACgBQADgBACABIHOD1QACACAAADIAABbQAAABAAAAQAAABAAAAQgBABAAAAQgBABAAAAQgBABAAAAQgBAAgBAAQAAAAgBAAQAAAAgBgBIgrgXQgFgCgCAEIgQAjQgBAAAAABQAAABgBAAQAAAAgBABQAAAAgBAAIgDgBg");
	this.shape_8.setTransform(27.1,178.5);

	this.shape_9 = new cjs.Shape();
	this.shape_9.graphics.f("#DCDCDC").s().p("ADgC1Ij+iHQichRhIgoQgMgHgEgNIgDgLIAAhUQADAHAIAEIDuCBIEACIQAYAMAagFIAABgQgGACgJAAIgCAAQgSAAgTgKg");
	this.shape_9.setTransform(27.9,196.9);

	this.shape_10 = new cjs.Shape();
	this.shape_10.graphics.f("#898989").s().p("Ai1BYIFliyIAGADIllCyg");
	this.shape_10.setTransform(78.1,127.6);

	this.shape_11 = new cjs.Shape();
	this.shape_11.graphics.f("#898989").s().p("Ai1BXIFlixIAGADIllCyg");
	this.shape_11.setTransform(73.1,124.9);

	this.shape_12 = new cjs.Shape();
	this.shape_12.graphics.f("#898989").s().p("Ai1BYIFliyIAGADIlkCyg");
	this.shape_12.setTransform(68.2,122.2);

	this.shape_13 = new cjs.Shape();
	this.shape_13.graphics.f("#898989").s().p("Ai1BYIFliyIAGADIllCyg");
	this.shape_13.setTransform(63.2,119.6);

	this.shape_14 = new cjs.Shape();
	this.shape_14.graphics.f("#898989").s().p("Ai1BYIFliyIAGADIlkCyg");
	this.shape_14.setTransform(58.3,117);

	this.shape_15 = new cjs.Shape();
	this.shape_15.graphics.f("#898989").s().p("Ai1BYIFkiyIAHADIllCyg");
	this.shape_15.setTransform(53.4,114.3);

	this.shape_16 = new cjs.Shape();
	this.shape_16.graphics.f("#898989").s().p("Ai1BYIFliyIAGADIlkCyg");
	this.shape_16.setTransform(48.4,111.7);

	this.shape_17 = new cjs.Shape();
	this.shape_17.graphics.f("#898989").s().p("Ai1BYIFliyIAGADIlkCyg");
	this.shape_17.setTransform(43.4,109);

	this.shape_18 = new cjs.Shape();
	this.shape_18.graphics.f("#898989").s().p("Ai1BYIFliyIAGADIllCyg");
	this.shape_18.setTransform(38.4,106.4);

	this.shape_19 = new cjs.Shape();
	this.shape_19.graphics.f("#898989").s().p("Ai1BXIFlixIAGADIlkCyg");
	this.shape_19.setTransform(33.5,103.8);

	this.shape_20 = new cjs.Shape();
	this.shape_20.graphics.f("#3B454C").s().p("AABAfIgBgBIAAgeIAAgCIgCgEIgKgMIgBgDQAAgHAGgDQAAgBABAAQABAAAAAAQABAAAAAAQAAAAABABIAPATQACAEgBAEIAAAiQgBADgFAAQgDAAgDgCg");
	this.shape_20.setTransform(67.8,144.7);

	this.shape_21 = new cjs.Shape();
	this.shape_21.graphics.f("#566168").s().p("AgjgLIAQgHIA2AeIgPAGg");
	this.shape_21.setTransform(68.9,147.9);

	this.shape_22 = new cjs.Shape();
	this.shape_22.graphics.f("#2D353A").s().p("AgHhNIAPgHIAACiIgPAHg");
	this.shape_22.setTransform(71.7,157.6);

	this.shape_23 = new cjs.Shape();
	this.shape_23.graphics.f("#333F48").s().p("AgbBDIAAijIA3AeIAACjg");
	this.shape_23.setTransform(68.1,156.4);

	this.shape_24 = new cjs.Shape();
	this.shape_24.graphics.f("#3B454C").s().p("AAJA0IgDgBIgYgNIgBgEQAAgHAEgCIADAAIASAKIAAhUIAHgDIAHADIAABdQAAAIgGABIgCAAIgDgBg");
	this.shape_24.setTransform(66.9,166.7);

	this.shape_25 = new cjs.Shape();
	this.shape_25.graphics.f("#2D353A").s().p("AgMAAIAZgMIAAAZg");
	this.shape_25.setTransform(74.6,206.8);

	this.shape_26 = new cjs.Shape();
	this.shape_26.graphics.f("#999999").s().p("AiOCuQgFgEADgMIA0jKQADgMAKgMQALgMALgGICxhWQALgFAIAFQAIAFgBAMIgDCIQAAANgIAMQgHANgLAHIjzCSQgHAEgEAAQgBAAAAgBQgBAAgBAAQAAAAgBAAQAAgBgBAAg");
	this.shape_26.setTransform(73.4,154.1);

	this.shape_27 = new cjs.Shape();
	this.shape_27.graphics.f("#898989").s().p("Aj7B2IH4j5IAAALIn4D8g");
	this.shape_27.setTransform(80.6,172.5);

	this.shape_28 = new cjs.Shape();
	this.shape_28.graphics.f("#C7C7C7").s().p("Aj7EbQgBjNADgYQADgZAjiDIAliJQAJghAagNIGHjEIAAJ3Ig1g+IiwBYIhGBVIAAB4IjKBlIgCjHg");
	this.shape_28.setTransform(80.6,167.5);

	this.shape_29 = new cjs.Shape();
	this.shape_29.graphics.f("#333F48").s().p("AifAOIBHhUICwhYIBIBUIAABzIgSAIIAAhyIg6hEIilBTIg8BIIAACBIgSAIg");
	this.shape_29.setTransform(91.8,192.2);

	this.shape_30 = new cjs.Shape();
	this.shape_30.graphics.f("#E7E7E7").s().p("ADgC6IjXhyIkOiQQgGgDgEgNIgDgNIAAhKIgDgGIAAgHIABgEIACgEIIoEmIAABgQgGACgJAAIgCABQgSAAgTgLg");
	this.shape_30.setTransform(27.9,196.4);

	this.shape_31 = new cjs.Shape();
	this.shape_31.graphics.f("#999999").s().p("ADHEaQgNAAgJgEQgjgOjGhqQjHhrgUgPQgFgEgDgGQgDgFAAgCIBFkjQABgGAFgCQAFgCAGACIHhEBQADACACAGQABAFgBAFIhKEcQAAADgKAAIgDAAg");
	this.shape_31.setTransform(31.2,144.7);

	this.shape_32 = new cjs.Shape();
	this.shape_32.graphics.f("#333F48").s().p("ADWCpInCjxQgMgGAAgOIAAgiQgBgDAIgWQAHgWADACIHND1IATA7IAAAYQAAAHgKAFQgGADgGAAQgHAAgGgDg");
	this.shape_32.setTransform(27.5,159.3);

	this.shape_33 = new cjs.Shape();
	this.shape_33.graphics.f("#DCDCDC").s().p("AoNFSIAAhwQgGi7AGhaQADgvAeh4IAsiiQADgLAMgPQALgOAKgFIGFjIIIoEnImQDYIgHAKIgrCNQgsCWgFArQgIBEAJFIg");
	this.shape_33.setTransform(52.9,152.4);

	this.shape_34 = new cjs.Shape();
	this.shape_34.graphics.f("#566168").s().p("AgjgKIAQgHIA2AcIgPAHg");
	this.shape_34.setTransform(6.4,115.3);

	this.shape_35 = new cjs.Shape();
	this.shape_35.graphics.f("#414A51").s().p("AgHhNIAOgHIAACiIgOAHg");
	this.shape_35.setTransform(9.2,125);

	this.shape_36 = new cjs.Shape();
	this.shape_36.graphics.f("#333F48").s().p("AgbBCIAAiiIA3AeIAACjg");
	this.shape_36.setTransform(5.7,123.8);

	this.shape_37 = new cjs.Shape();
	this.shape_37.graphics.f("#AAAAAA").s().p("AgWAqQgGgJAAgOQAAgRAIgQQAIgRAMgLQAKgEAIAFQALAHAAATQAAAQgKARQgJARgMAHQgGADgFAAQgFAAgEgDg");
	this.shape_37.setTransform(91.9,201.3);

	this.shape_38 = new cjs.Shape();
	this.shape_38.graphics.f("#C7C7C7").s().p("AgaAxQgLgJAAgVQAAgTALgVQALgUAPgIQAOgHALAHQANAJAAAWQAAAUgLAUQgLAUgQAIQgGAEgHAAQgHAAgGgFg");
	this.shape_38.setTransform(92.9,201.3);

	this.shape_39 = new cjs.Shape();
	this.shape_39.graphics.f("#DCDCDC").s().p("AgqBOQgSgOAAgiQAAggASggQASggAYgNQAXgMARALQAVAOAAAkQAAAggSAhQgSAggZANQgLAGgKAAQgMAAgJgIg");
	this.shape_39.setTransform(92.9,201.3);

	this.shape_40 = new cjs.Shape();
	this.shape_40.graphics.f("#505960").s().p("AhICEQgfgYAAg4QAAg3Afg3QAeg3AqgVQAngUAdATQARALAJAVQAJAWAAAeQABA3gfA3QgeA3grAVQgTAKgRAAQgUAAgQgNg");
	this.shape_40.setTransform(92.5,201.1);

	this.shape_41 = new cjs.Shape();
	this.shape_41.graphics.f("#2D353A").s().p("AhngyQAmgTAeATICLBOIgPAgg");
	this.shape_41.setTransform(88.9,184.7);

	this.shape_42 = new cjs.Shape();
	this.shape_42.graphics.f("#3B454C").s().p("AiDgeQAagiAdgPQAngTAeATICLBPIg0Bag");
	this.shape_42.setTransform(86.1,187.6);

	this.shape_43 = new cjs.Shape();
	this.shape_43.graphics.f("#414A51").s().p("AhsBpQgvgZAAhBQAAg3Aeg3QAfg2AqgWQAngTAdATICMBPIiCESg");
	this.shape_43.setTransform(83.7,196.8);

	this.shape_44 = new cjs.Shape();
	this.shape_44.graphics.f("#414A51").s().p("AhqgQICfhQIA2A+IAACCg");
	this.shape_44.setTransform(95.3,187.5);

	this.shape_45 = new cjs.Shape();
	this.shape_45.graphics.f("#E7E7E7").s().p("AvmCpIVNqmIKAFWI1NKlg");
	this.shape_45.setTransform(145,51);

	this.shape_46 = new cjs.Shape();
	this.shape_46.graphics.f("#C7C7C7").s().p("AqmhHIVNqnIAAM2I1NKng");
	this.shape_46.setTransform(177,109.2);

	this.shape_47 = new cjs.Shape();
	this.shape_47.graphics.f("#DCDCDC").s().p("Ak/DxIAAs2IJ/FVIAAM2g");
	this.shape_47.setTransform(77.1,126.1);

	this.shape_48 = new cjs.Shape();
	this.shape_48.graphics.f("#E7E7E7").s().p("AiFg6IAcgPIDvCFIgcANg");
	this.shape_48.setTransform(224.7,118.2);

	this.shape_49 = new cjs.Shape();
	this.shape_49.graphics.f("#C7C7C7").s().p("AgNgqIAbgOIAABjIgbAOg");
	this.shape_49.setTransform(236.8,129.9);

	this.shape_50 = new cjs.Shape();
	this.shape_50.graphics.f("#AAAAAA").s().p("AgWArQgGgKAAgOQAAgRAIgQQAIgRAMgLQAKgEAIAFQALAHAAATQAAARgKAQQgJARgMAHQgGADgGAAQgEAAgEgCg");
	this.shape_50.setTransform(207.1,143.7);

	this.shape_51 = new cjs.Shape();
	this.shape_51.graphics.f("#C7C7C7").s().p("AgaAxQgLgJAAgVQAAgTALgVQALgUAPgIQAPgHAKAHQANAIAAAXQAAAUgLAUQgLAUgQAIQgHAEgGAAQgHAAgGgFg");
	this.shape_51.setTransform(208,143.7);

	this.shape_52 = new cjs.Shape();
	this.shape_52.graphics.f("#DCDCDC").s().p("AgqBOQgSgOAAghQAAghASggQASggAYgNQAXgMARAMQAVANAAAkQAAAhgSAgQgSAhgZAMQgLAGgKAAQgMAAgJgIg");
	this.shape_52.setTransform(208,143.7);

	this.shape_53 = new cjs.Shape();
	this.shape_53.graphics.f("#505960").s().p("AhICEQgfgYABg4QgBg3Afg3QAeg3AqgVQAngUAdATQAkAXAAA9QgBA3geA3QgeA2grAWQgTAKgSAAQgTAAgQgNg");
	this.shape_53.setTransform(207.7,143.6);

	this.shape_54 = new cjs.Shape();
	this.shape_54.graphics.f("#2D353A").s().p("AhngxQAmgUAeATICLBPIgPAfg");
	this.shape_54.setTransform(204,127.1);

	this.shape_55 = new cjs.Shape();
	this.shape_55.graphics.f("#3B454C").s().p("AiDgeQAZgiAegPQAngUAeAUICLBPIg0Bag");
	this.shape_55.setTransform(201.3,130.1);

	this.shape_56 = new cjs.Shape();
	this.shape_56.graphics.f("#414A51").s().p("AhsBpQgvgZAAhBQAAg3Aeg2QAfg3AqgVQAngUAdATICMBQIiCERg");
	this.shape_56.setTransform(198.9,139.2);

	this.shape_57 = new cjs.Shape();
	this.shape_57.graphics.f("#DCDCDC").s().p("Ah3gPIAAhkIDvCDIAABlg");
	this.shape_57.setTransform(223.3,123.9);

	this.shape_58 = new cjs.Shape();
	this.shape_58.graphics.f("#2D353A").s().p("AlHA3IG9jeIDSBxIm9Deg");
	this.shape_58.setTransform(124,164.6);

	this.shape_59 = new cjs.Shape();
	this.shape_59.graphics.f("#505960").s().p("AjeAoIG9jeIAACPIm9Deg");
	this.shape_59.setTransform(134.5,177.3);

	this.shape_60 = new cjs.Shape();
	this.shape_60.graphics.f("#414A51").s().p("AhoAPIAAiOIDRBxIAACOg");
	this.shape_60.setTransform(101.7,182.9);

	this.shape_61 = new cjs.Shape();
	this.shape_61.graphics.f("rgba(153,153,153,0.149)").s().p("AuQMFIphk+IV30lIZsNnI3WLsIizgKIjnB0g");
	this.shape_61.setTransform(167.2,139);

	this.timeline.addTween(cjs.Tween.get({}).to({state:[{t:this.shape_61},{t:this.shape_60},{t:this.shape_59},{t:this.shape_58},{t:this.shape_57},{t:this.shape_56},{t:this.shape_55},{t:this.shape_54},{t:this.shape_53},{t:this.shape_52},{t:this.shape_51},{t:this.shape_50},{t:this.shape_49},{t:this.shape_48},{t:this.shape_47},{t:this.shape_46},{t:this.shape_45},{t:this.shape_44},{t:this.shape_43},{t:this.shape_42},{t:this.shape_41},{t:this.shape_40},{t:this.shape_39},{t:this.shape_38},{t:this.shape_37},{t:this.shape_36},{t:this.shape_35},{t:this.shape_34},{t:this.shape_33},{t:this.shape_32},{t:this.shape_31},{t:this.shape_30},{t:this.shape_29},{t:this.shape_28},{t:this.shape_27},{t:this.shape_26},{t:this.shape_25},{t:this.shape_24},{t:this.shape_23},{t:this.shape_22},{t:this.shape_21},{t:this.shape_20},{t:this.shape_19},{t:this.shape_18},{t:this.shape_17},{t:this.shape_16},{t:this.shape_15},{t:this.shape_14},{t:this.shape_13},{t:this.shape_12},{t:this.shape_11},{t:this.shape_10},{t:this.shape_9},{t:this.shape_8},{t:this.shape_7},{t:this.shape_6},{t:this.shape_5},{t:this.shape_4},{t:this.shape_3},{t:this.shape_2},{t:this.shape_1},{t:this.shape}]}).wait(1));

}).prototype = p = new cjs.MovieClip();
p.nominalBounds = new cjs.Rectangle(0,0,319.5,225.3);


(lib.g_orangepaper = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer 1
	this.shape = new cjs.Shape();
	this.shape.graphics.f("#FF6600").s().p("EgnDAOEIAA8HIAUAAQACANAJAJQAKAIAOAAQANAAAKgIQAKgJACgNIAeAAQACANAJAJQAKAIAOAAQANAAAKgIQAKgJACgNIAeAAQACANAJAJQALAIANAAQANAAAKgIQAKgJACgNIAeAAQACANAKAJQAJAIAOAAQANAAAKgIQAKgJACgNIAeAAQACANAKAJQAJAIAOAAQANAAAKgIQAKgJABgNIAfAAQACANAKAJQAKAIANAAQANAAAKgIQAJgJACgNIAfAAQACANAKAJQAKAIANAAQANAAAKgIQAJgJACgNIAfAAQACANAKAJQAKAIANAAQANAAAKgIQAJgJACgNIAfAAQACANAJAJQALAIANAAQANAAAKgIQAJgJADgNIAeAAQACANAJAJQAKAIAOAAQANAAAKgIQAKgJACgNIAeAAQACANAJAJQAKAIAOAAQANAAAKgIQAKgJACgNIAeAAQACANAJAJQALAIANAAQANAAAKgIQAKgJACgNIAeAAQACANAKAJQAJAIAOAAQANAAAKgIQAKgJABgNIAfAAQACANAKAJQAJAIAOAAQANAAAKgIQAKgJABgNIAfAAQACANAKAJQAKAIANAAQANAAAKgIQAJgJACgNIAfAAQACANAKAJQAKAIANAAQANAAAKgIQAJgJACgNIAfAAQACANAJAJQALAIANAAQANAAAKgIQAJgJACgNIAfAAQACANAJAJQALAIANAAQANAAAKgIQAJgJADgNIAeAAQACANAJAJQAKAIAOAAQANAAAKgIQAKgJACgNIAeAAQACANAJAJQAKAIAOAAQANAAAKgIQAKgJACgNIAeAAQACANAJAJQALAIANAAQANAAAKgIQAKgJACgNIAeAAQACANAKAJQAJAIAOAAQANAAAKgIQAKgJABgNIAfAAQACANAKAJQAJAIAOAAQANAAAKgIQAKgJABgNIAfAAQACANAKAJQAKAIANAAQANAAAKgIQAJgJACgNIAfAAQACANAKAJQAKAIANAAQANAAAKgIQAJgJACgNIAeAAQACANAJAJQALAIANAAQANAAAKgIQAJgJACgNIAfAAQACANAJAJQALAIANAAQANAAAKgIQAJgJADgNIAeAAQACANAJAJQAKAIAOAAQANAAAKgIQAKgJACgNIAeAAQACANAJAJQAKAIAOAAQANAAAKgIQAKgJACgNIAeAAQACANAJAJQALAIANAAQANAAAKgIQAKgJACgNIAeAAQACANAKAJQAJAIAOAAQANAAAKgIQAKgJABgNIAfAAQACANAKAJQAJAIAOAAQANAAAKgIQAKgJABgNIAfAAQACANAKAJQAJAIAOAAQANAAAKgIQAJgJACgNIAfAAQACANAKAJQAKAIANAAQANAAAKgIQAJgJACgNIAfAAQACANAJAJQALAIANAAQANAAAKgIQAJgJACgNIAfAAQACANAJAJQALAIANAAQANAAAKgIQAJgJADgNIAeAAQACANAJAJQAKAIAOAAQANAAAKgIQAKgJACgNIAeAAQACANAJAJQAKAIAOAAQANAAAKgIQAKgJACgNIAeAAQACANAJAJQALAIANAAQANAAAKgIQAKgJACgNIAeAAQACANAKAJQAJAIAOAAQANAAAKgIQAKgJABgNIAfAAQACANAKAJQAJAIAOAAQANAAAKgIQAKgJABgNIAfAAQACANAKAJQAJAIAOAAQANAAAKgIQAJgJACgNIAfAAQACANAKAJQAKAIANAAQANAAAKgIQAJgJACgNIAfAAQACANAJAJQALAIANAAQANAAAKgIQAJgJACgNIAfAAQACANAJAJQALAIANAAQANAAAKgIQAJgJADgNIAeAAQACANAJAJQAKAIAOAAQANAAAKgIQAKgJACgNIAeAAQACANAJAJQAKAIAOAAQANAAAKgIQAKgJACgNIAeAAQACANAJAJQALAIANAAQANAAAKgIQAKgJACgNIAeAAQACANAKAJQAJAIAOAAQANAAAKgIQAKgJACgNIAeAAQACANAKAJQAJAIAOAAQANAAAKgIQAKgJABgNIALAAIAAcHg");
	this.shape.setTransform(250,90);

	this.timeline.addTween(cjs.Tween.get(this.shape).wait(1));

}).prototype = p = new cjs.MovieClip();
p.nominalBounds = new cjs.Rectangle(0,0,500,180);


(lib.g_logo = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer 1
	this.shape = new cjs.Shape();
	this.shape.graphics.f("#FF6600").s().p("AWSPPQkLiniSkYQiREYkMCnQkTCslFAAQlDAAkUisQkLiniSkYQiREYkMCnQkTCslFAAQjoAAjUhaQjNhYieieQififhWjNQhajWAAjpQAAjoBajVQBWjNCfifQCeigDNhWQDUhbDoAAQFEAAEUCsQELCnCSEYQCRkYEMinQETisFEAAQFFAAEUCsQEMCmCREZQCRkYEMinQETisFFAAQDoAADUBbQDNBWCeCgQCeCfBXDNQBZDVAADoQAADphaDVQhWDNifCgQieCfjNBWQjUBbjoAAQlEAAkUisgAaTsxQifBEh7B6Qh6B7hECgQhFClAACzQAAC1BFCkQBECgB6B8QB7B6CfBEQCkBGC0AAQC0AACkhGQCfhEB6h6QB7h7BDigQBGilAAi1QAAizhGilQhDigh7h7Qh6h6ifhEQikhGi0AAQi0AAikBGgAlXsxQifBEh7B6Qh6B7hECgQhFClAACzQAAC1BFCkQBECgB6B8QB7B6CfBEQClBGCyAAQC0AAClhGQCehEB6h6QB7h7BDigQBGilAAi1QAAizhGilQhDigh7h7Qh6h6ifhEQikhGi0AAQiyAAilBGgEglBgMxQieBEh7B6Qh7B7hDCgQhGClAACzQAAC1BGCkQBDCgB7B8QB7B6CeBEQClBGCzAAQC0AACkhGQCehEB7h6QB6h7BEigQBGilAAi1QAAizhGilQhDigh6h7Qh7h6iehEQikhGi1AAQi0AAikBGgAd1IfQgNAAgJgJQgJgJAAgMIAAr3QgUAEgYAAIjpAAQgNAAgIgJQgJgIAAgNIAAjAQAAgMAJgJQAKgJALAAINWAAIAAgBQANAAAJAJQAJAJAAAMIAADAQgBAMgIAKQgKAIgMAAIjcAAQgSAAgWgCIgSgCIAAL4QAAANgIAIQgJAJgNAAgEghiAIfQgMAAgJgJQgJgIAAgNIAAr4QgVAEgWAAIjqAAQgMAAgIgIQgJgKAAgMIAAjAQgBgMAJgJQAJgJAMAAIAAABINXAAQANAAAIAJQAJAJAAAMIAADAQAAAMgIAJQgJAJgNAAIjeAAQgSAAgVgCIgSgCIAAL3QAAAMgJAJQgJAJgMAAgAD0IDQgJAAgJgFQgLgFgFgHIlyn6QgIgKgJgTIgIgSIAAIbQABANgKAIQgIAJgMAAIjjAAQgNAAgIgJQgJgIAAgNIAAvIQAAgMAJgJQAJgJAMAAIDJAAQAHAAALAFQAJAGAFAGIFzH5QALAQAMAfIAAobQAAgNAJgIQAIgJAOAAIDiAAQAMAAAJAJQAJAJAAANIAAPIQAAANgJAIQgIAJgMAAg");
	this.shape.setTransform(48.5,17.6,0.153,0.153);

	this.timeline.addTween(cjs.Tween.get(this.shape).wait(1));

}).prototype = p = new cjs.MovieClip();
p.nominalBounds = new cjs.Rectangle(0,0,97,35.2);


(lib.g_building5 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer 1
	this.shape = new cjs.Shape();
	this.shape.graphics.f("#C7C7C7").s().p("AiEAzIEJiEIAAAfIkJCEg");
	this.shape.setTransform(192.1,101.7);

	this.shape_1 = new cjs.Shape();
	this.shape_1.graphics.f("#E7E7E7").s().p("AkngTIELiFIFECtIkLCEg");
	this.shape_1.setTransform(175.9,91.4);

	this.shape_2 = new cjs.Shape();
	this.shape_2.graphics.f("#DCDCDC").s().p("AiihGIAAgfIFFCsIAAAfg");
	this.shape_2.setTransform(162.5,99.6);

	this.shape_3 = new cjs.Shape();
	this.shape_3.graphics.f("#C7C7C7").s().p("AiEAzIEJiEIAAAfIkJCEg");
	this.shape_3.setTransform(97.6,53);

	this.shape_4 = new cjs.Shape();
	this.shape_4.graphics.f("#E7E7E7").s().p("AkngUIEKiEIFFCsIkKCFg");
	this.shape_4.setTransform(81.3,42.8);

	this.shape_5 = new cjs.Shape();
	this.shape_5.graphics.f("#DCDCDC").s().p("AiihGIAAgfIFFCsIAAAfg");
	this.shape_5.setTransform(68,50.9);

	this.shape_6 = new cjs.Shape();
	this.shape_6.graphics.f("#B7B7B7").s().p("AtWmTIAAhwIatOXIAABwg");
	this.shape_6.setTransform(90.4,101.8);

	this.shape_7 = new cjs.Shape();
	this.shape_7.graphics.f("#465059").s().p("AtZmRIAAh2IazOaIAAB1g");
	this.shape_7.setTransform(90.1,102);

	this.shape_8 = new cjs.Shape();
	this.shape_8.graphics.f("#B7B7B7").s().p("AtWmTIAAhwIatOXIAABwg");
	this.shape_8.setTransform(90.4,121.8);

	this.shape_9 = new cjs.Shape();
	this.shape_9.graphics.f("#465059").s().p("AtZmSIAAh1IazOaIAAB1g");
	this.shape_9.setTransform(90.1,122);

	this.shape_10 = new cjs.Shape();
	this.shape_10.graphics.f("#B7B7B7").s().p("AtWmTIAAhwIatOXIAABwg");
	this.shape_10.setTransform(90.4,141.8);

	this.shape_11 = new cjs.Shape();
	this.shape_11.graphics.f("#465059").s().p("AtZmSIAAh1IazOaIAAB1g");
	this.shape_11.setTransform(90.1,142);

	this.shape_12 = new cjs.Shape();
	this.shape_12.graphics.f("#B7B7B7").s().p("AtWmTIAAhwIatOXIAABwg");
	this.shape_12.setTransform(90.4,161.8);

	this.shape_13 = new cjs.Shape();
	this.shape_13.graphics.f("#465059").s().p("AtZmSIAAh1IazOaIAAB1g");
	this.shape_13.setTransform(90.1,162);

	this.shape_14 = new cjs.Shape();
	this.shape_14.graphics.f("#B7B7B7").s().p("AtWmTIAAhwIatOXIAABwg");
	this.shape_14.setTransform(90.4,191.8);

	this.shape_15 = new cjs.Shape();
	this.shape_15.graphics.f("#465059").s().p("AtZmRIAAh2IazOaIAAB1g");
	this.shape_15.setTransform(90.1,192);

	this.shape_16 = new cjs.Shape();
	this.shape_16.graphics.f("#B7B7B7").s().p("AtWmTIAAhwIatOXIAABwg");
	this.shape_16.setTransform(90.4,211.8);

	this.shape_17 = new cjs.Shape();
	this.shape_17.graphics.f("#465059").s().p("AtZmSIAAh1IazOaIAAB1g");
	this.shape_17.setTransform(90.1,212);

	this.shape_18 = new cjs.Shape();
	this.shape_18.graphics.f("#B7B7B7").s().p("AtWmTIAAhwIatOXIAABwg");
	this.shape_18.setTransform(90.4,231.8);

	this.shape_19 = new cjs.Shape();
	this.shape_19.graphics.f("#465059").s().p("AtZmSIAAh1IazOaIAAB1g");
	this.shape_19.setTransform(90.1,232);

	this.shape_20 = new cjs.Shape();
	this.shape_20.graphics.f("#B7B7B7").s().p("AtWmTIAAhwIatOXIAABwg");
	this.shape_20.setTransform(90.4,251.8);

	this.shape_21 = new cjs.Shape();
	this.shape_21.graphics.f("#465059").s().p("AtZmSIAAh1IazOaIAAB1g");
	this.shape_21.setTransform(90.1,252);

	this.shape_22 = new cjs.Shape();
	this.shape_22.graphics.f("#B7B7B7").s().p("AtWmTIAAhwIatOXIAABwg");
	this.shape_22.setTransform(90.4,281.8);

	this.shape_23 = new cjs.Shape();
	this.shape_23.graphics.f("#465059").s().p("AtZmRIAAh2IazOaIAAB1g");
	this.shape_23.setTransform(90.1,282);

	this.shape_24 = new cjs.Shape();
	this.shape_24.graphics.f("#B7B7B7").s().p("AtWmTIAAhwIatOXIAABwg");
	this.shape_24.setTransform(90.4,301.8);

	this.shape_25 = new cjs.Shape();
	this.shape_25.graphics.f("#465059").s().p("AtZmSIAAh1IazOaIAAB1g");
	this.shape_25.setTransform(90.1,302);

	this.shape_26 = new cjs.Shape();
	this.shape_26.graphics.f("#B7B7B7").s().p("AtWmTIAAhwIatOXIAABwg");
	this.shape_26.setTransform(90.4,321.8);

	this.shape_27 = new cjs.Shape();
	this.shape_27.graphics.f("#465059").s().p("AtZmSIAAh1IazOaIAAB1g");
	this.shape_27.setTransform(90.1,322);

	this.shape_28 = new cjs.Shape();
	this.shape_28.graphics.f("#B7B7B7").s().p("AtWmTIAAhwIatOXIAABwg");
	this.shape_28.setTransform(90.4,341.8);

	this.shape_29 = new cjs.Shape();
	this.shape_29.graphics.f("#465059").s().p("AtZmSIAAh1IazOaIAAB1g");
	this.shape_29.setTransform(90.1,342);

	this.shape_30 = new cjs.Shape();
	this.shape_30.graphics.f("#E7E7E7").s().p("AuQnfIASgKIcPPJIgRAKg");
	this.shape_30.setTransform(91.3,84.6);

	this.shape_31 = new cjs.Shape();
	this.shape_31.graphics.f("#E7E7E7").s().p("AuAnWIASgKIbvO4IgRAKg");
	this.shape_31.setTransform(163.2,49);

	this.shape_32 = new cjs.Shape();
	this.shape_32.graphics.f("#E7E7E7").s().p("Ak1icIARgKIJaFDIgRAKg");
	this.shape_32.setTransform(91.3,84.5);

	this.shape_33 = new cjs.Shape();
	this.shape_33.graphics.f("#E7E7E7").s().p("Al3CyILflsIAQAJIrfFsg");
	this.shape_33.setTransform(37.6,18.7);

	this.shape_34 = new cjs.Shape();
	this.shape_34.graphics.f("#E7E7E7").s().p("Al3CzILfltIAQAIIrfFtg");
	this.shape_34.setTransform(216.9,114.9);

	this.shape_35 = new cjs.Shape();
	this.shape_35.graphics.f("#C7C7C7").s().p("AlvClILflsIAABIIqeFHg");
	this.shape_35.setTransform(36.8,20);

	this.shape_36 = new cjs.Shape();
	this.shape_36.graphics.f("#DCDCDC").s().p("At/mrIAAhHIb/PAIhAAlg");
	this.shape_36.setTransform(163.3,49.9);

	this.shape_37 = new cjs.Shape();
	this.shape_37.graphics.f("#E7E7E7").s().p("AznklILgltIbvO4IrgFtg");
	this.shape_37.setTransform(127.3,66.8);

	this.shape_38 = new cjs.Shape();
	this.shape_38.graphics.f("#C7C7C7").s().p("AuHlKIAAk0IcPPJIAAE0g");
	this.shape_38.setTransform(90.5,376.2);

	this.shape_39 = new cjs.Shape();
	this.shape_39.graphics.f("#DCDCDC").s().p("AuHOtMgABgsfIcQPKMAAAAsbg");
	this.shape_39.setTransform(90.5,227.2);

	this.shape_40 = new cjs.Shape();
	this.shape_40.graphics.f("#B7B7B7").s().p("AlvAcILflsIAAE0IrfFtg");
	this.shape_40.setTransform(217.7,406.4);

	this.shape_41 = new cjs.Shape();
	this.shape_41.graphics.f("#C7C7C7").s().p("Alv0VILfltMAAAAsfIrfHmg");
	this.shape_41.setTransform(217.7,263.7);

	this.shape_42 = new cjs.Shape();
	this.shape_42.graphics.f("rgba(153,153,153,0.149)").s().p("AvEGQInNltIQtn7IholjIdePuI0aKJg");
	this.shape_42.setTransform(277.4,400.1);

	this.timeline.addTween(cjs.Tween.get({}).to({state:[{t:this.shape_42},{t:this.shape_41},{t:this.shape_40},{t:this.shape_39},{t:this.shape_38},{t:this.shape_37},{t:this.shape_36},{t:this.shape_35},{t:this.shape_34},{t:this.shape_33},{t:this.shape_32},{t:this.shape_31},{t:this.shape_30},{t:this.shape_29},{t:this.shape_28},{t:this.shape_27},{t:this.shape_26},{t:this.shape_25},{t:this.shape_24},{t:this.shape_23},{t:this.shape_22},{t:this.shape_21},{t:this.shape_20},{t:this.shape_19},{t:this.shape_18},{t:this.shape_17},{t:this.shape_16},{t:this.shape_15},{t:this.shape_14},{t:this.shape_13},{t:this.shape_12},{t:this.shape_11},{t:this.shape_10},{t:this.shape_9},{t:this.shape_8},{t:this.shape_7},{t:this.shape_6},{t:this.shape_5},{t:this.shape_4},{t:this.shape_3},{t:this.shape_2},{t:this.shape_1},{t:this.shape}]}).wait(1));

}).prototype = p = new cjs.MovieClip();
p.nominalBounds = new cjs.Rectangle(0,0,420,482.9);


(lib.g_building4 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer 1
	this.shape = new cjs.Shape();
	this.shape.graphics.f("#999999").s().p("AuYGUIcxuXIAABwI8xOXg");
	this.shape.setTransform(176.8,107.5);

	this.shape_1 = new cjs.Shape();
	this.shape_1.graphics.f("#465059").s().p("AubGTIc2uaIAAB1I82Oag");
	this.shape_1.setTransform(177.1,107.7);

	this.shape_2 = new cjs.Shape();
	this.shape_2.graphics.f("#999999").s().p("AuYGUIcxuXIAABwI8xOXg");
	this.shape_2.setTransform(176.8,127.5);

	this.shape_3 = new cjs.Shape();
	this.shape_3.graphics.f("#465059").s().p("AubGTIc2uaIAAB1I82Oag");
	this.shape_3.setTransform(177.1,127.7);

	this.shape_4 = new cjs.Shape();
	this.shape_4.graphics.f("#999999").s().p("AuYGUIcxuXIAABwI8xOXg");
	this.shape_4.setTransform(176.8,147.5);

	this.shape_5 = new cjs.Shape();
	this.shape_5.graphics.f("#465059").s().p("AubGTIc2uaIAAB1I82Oag");
	this.shape_5.setTransform(177.1,147.7);

	this.shape_6 = new cjs.Shape();
	this.shape_6.graphics.f("#999999").s().p("AuYGUIcxuXIAABwI8xOXg");
	this.shape_6.setTransform(176.8,167.5);

	this.shape_7 = new cjs.Shape();
	this.shape_7.graphics.f("#465059").s().p("AubGTIc2uaIAAB1I82Oag");
	this.shape_7.setTransform(177.1,167.7);

	this.shape_8 = new cjs.Shape();
	this.shape_8.graphics.f("#999999").s().p("AuYGUIcxuXIAABwI8xOXg");
	this.shape_8.setTransform(176.8,197.5);

	this.shape_9 = new cjs.Shape();
	this.shape_9.graphics.f("#465059").s().p("AubGTIc2uaIAAB1I82Oag");
	this.shape_9.setTransform(177.1,197.7);

	this.shape_10 = new cjs.Shape();
	this.shape_10.graphics.f("#999999").s().p("AuYGUIcxuXIAABwI8xOXg");
	this.shape_10.setTransform(176.8,217.5);

	this.shape_11 = new cjs.Shape();
	this.shape_11.graphics.f("#465059").s().p("AubGTIc2uaIAAB1I82Oag");
	this.shape_11.setTransform(177.1,217.7);

	this.shape_12 = new cjs.Shape();
	this.shape_12.graphics.f("#999999").s().p("AuYGUIcxuXIAABwI8xOXg");
	this.shape_12.setTransform(176.8,237.5);

	this.shape_13 = new cjs.Shape();
	this.shape_13.graphics.f("#465059").s().p("AubGTIc2uaIAAB1I82Oag");
	this.shape_13.setTransform(177.1,237.7);

	this.shape_14 = new cjs.Shape();
	this.shape_14.graphics.f("#999999").s().p("AuYGUIcxuXIAABwI8xOXg");
	this.shape_14.setTransform(176.8,257.5);

	this.shape_15 = new cjs.Shape();
	this.shape_15.graphics.f("#465059").s().p("AubGTIc2uaIAAB1I82Oag");
	this.shape_15.setTransform(177.1,257.7);

	this.shape_16 = new cjs.Shape();
	this.shape_16.graphics.f("#999999").s().p("AuYGUIcxuXIAABwI8xOXg");
	this.shape_16.setTransform(176.8,287.5);

	this.shape_17 = new cjs.Shape();
	this.shape_17.graphics.f("#465059").s().p("AubGTIc2uaIAAB1I82Oag");
	this.shape_17.setTransform(177.1,287.7);

	this.shape_18 = new cjs.Shape();
	this.shape_18.graphics.f("#999999").s().p("AuYGUIcxuXIAABwI8xOXg");
	this.shape_18.setTransform(176.8,307.5);

	this.shape_19 = new cjs.Shape();
	this.shape_19.graphics.f("#465059").s().p("AubGTIc2uaIAAB1I82Oag");
	this.shape_19.setTransform(177.1,307.7);

	this.shape_20 = new cjs.Shape();
	this.shape_20.graphics.f("#999999").s().p("AuYGUIcxuXIAABwI8xOXg");
	this.shape_20.setTransform(176.8,327.5);

	this.shape_21 = new cjs.Shape();
	this.shape_21.graphics.f("#465059").s().p("AubGTIc2uaIAAB1I82Oag");
	this.shape_21.setTransform(177.1,327.7);

	this.shape_22 = new cjs.Shape();
	this.shape_22.graphics.f("#999999").s().p("AuYGUIcxuXIAABwI8xOXg");
	this.shape_22.setTransform(176.8,347.5);

	this.shape_23 = new cjs.Shape();
	this.shape_23.graphics.f("#465059").s().p("AubGTIc2uaIAAB1I82Oag");
	this.shape_23.setTransform(177.1,347.7);

	this.shape_24 = new cjs.Shape();
	this.shape_24.graphics.f("#C7C7C7").s().p("AhJAMICShJIAAAzIiSBIg");
	this.shape_24.setTransform(115.9,99.7);

	this.shape_25 = new cjs.Shape();
	this.shape_25.graphics.f("#E7E7E7").s().p("AiigKICThJICyBeIiTBKg");
	this.shape_25.setTransform(106.9,92.4);

	this.shape_26 = new cjs.Shape();
	this.shape_26.graphics.f("#DCDCDC").s().p("AhZgWIAAgyICzBfIAAAyg");
	this.shape_26.setTransform(99.6,98.6);

	this.shape_27 = new cjs.Shape();
	this.shape_27.graphics.f("#C7C7C7").s().p("AhIAMICRhJIAAAzIiRBIg");
	this.shape_27.setTransform(195.9,59.7);

	this.shape_28 = new cjs.Shape();
	this.shape_28.graphics.f("#E7E7E7").s().p("AiigKICThKICyBfIiTBJg");
	this.shape_28.setTransform(186.9,52.4);

	this.shape_29 = new cjs.Shape();
	this.shape_29.graphics.f("#DCDCDC").s().p("AhZgWIAAgyICzBfIAAAyg");
	this.shape_29.setTransform(179.6,58.6);

	this.shape_30 = new cjs.Shape();
	this.shape_30.graphics.f("#C7C7C7").s().p("AhJAMICThJIAAAzIiTBIg");
	this.shape_30.setTransform(155.9,79.7);

	this.shape_31 = new cjs.Shape();
	this.shape_31.graphics.f("#E7E7E7").s().p("AiigKICThJICyBeIiTBJg");
	this.shape_31.setTransform(146.9,72.4);

	this.shape_32 = new cjs.Shape();
	this.shape_32.graphics.f("#DCDCDC").s().p("AhZgWIAAgyICzBfIAAAyg");
	this.shape_32.setTransform(139.6,78.6);

	this.shape_33 = new cjs.Shape();
	this.shape_33.graphics.f("#E7E7E7").s().p("AvFHXId4u4IATALI94O3g");
	this.shape_33.setTransform(98.4,49);

	this.shape_34 = new cjs.Shape();
	this.shape_34.graphics.f("#E7E7E7").s().p("AlNCdIKIlDIATAKIqIFDg");
	this.shape_34.setTransform(175.7,90.3);

	this.shape_35 = new cjs.Shape();
	this.shape_35.graphics.f("#E7E7E7").s().p("AmUjOIARgJIMYGmIgRAJg");
	this.shape_35.setTransform(233.5,21.6);

	this.shape_36 = new cjs.Shape();
	this.shape_36.graphics.f("#E7E7E7").s().p("AmUjOIARgJIMYGmIgSAJg");
	this.shape_36.setTransform(40.5,117.7);

	this.shape_37 = new cjs.Shape();
	this.shape_37.graphics.f("#DCDCDC").s().p("AmLicIAAhIIMXGmIhFAjg");
	this.shape_37.setTransform(234.4,22.9);

	this.shape_38 = new cjs.Shape();
	this.shape_38.graphics.f("#C7C7C7").s().p("AvEHOIeJvAIAABHI9EOeg");
	this.shape_38.setTransform(98.3,49.9);

	this.shape_39 = new cjs.Shape();
	this.shape_39.graphics.f("#E7E7E7").s().p("A1IEJId4u4IMZGnI94O4g");
	this.shape_39.setTransform(137,69.7);

	this.shape_40 = new cjs.Shape();
	this.shape_40.graphics.f("#B7B7B7").s().p("AvNFLIebvJIAAE0I+bPJg");
	this.shape_40.setTransform(176.6,381.9);

	this.shape_41 = new cjs.Shape();
	this.shape_41.graphics.f("#C7C7C7").s().p("AvNuoIebvKMAAAAseI+bPHg");
	this.shape_41.setTransform(176.6,233);

	this.shape_42 = new cjs.Shape();
	this.shape_42.graphics.f("#C7C7C7").s().p("AmLg5IAAkzIMXGlIAAE0g");
	this.shape_42.setTransform(39.6,409.3);

	this.shape_43 = new cjs.Shape();
	this.shape_43.graphics.f("#DCDCDC").s().p("AmLSAMAAAgsfIMXGnMAAAAuXg");
	this.shape_43.setTransform(39.6,266.6);

	this.shape_44 = new cjs.Shape();
	this.shape_44.graphics.f("rgba(153,153,153,0.149)").s().p("A48KzIprnrIWaqnIHTsPMAnhAVEMgk1ASZg");
	this.shape_44.setTransform(239,376.8);

	this.timeline.addTween(cjs.Tween.get({}).to({state:[{t:this.shape_44},{t:this.shape_43},{t:this.shape_42},{t:this.shape_41},{t:this.shape_40},{t:this.shape_39},{t:this.shape_38},{t:this.shape_37},{t:this.shape_36},{t:this.shape_35},{t:this.shape_34},{t:this.shape_33},{t:this.shape_32},{t:this.shape_31},{t:this.shape_30},{t:this.shape_29},{t:this.shape_28},{t:this.shape_27},{t:this.shape_26},{t:this.shape_25},{t:this.shape_24},{t:this.shape_23},{t:this.shape_22},{t:this.shape_21},{t:this.shape_20},{t:this.shape_19},{t:this.shape_18},{t:this.shape_17},{t:this.shape_16},{t:this.shape_15},{t:this.shape_14},{t:this.shape_13},{t:this.shape_12},{t:this.shape_11},{t:this.shape_10},{t:this.shape_9},{t:this.shape_8},{t:this.shape_7},{t:this.shape_6},{t:this.shape_5},{t:this.shape_4},{t:this.shape_3},{t:this.shape_2},{t:this.shape_1},{t:this.shape}]}).wait(1));

}).prototype = p = new cjs.MovieClip();
p.nominalBounds = new cjs.Rectangle(0,0,460.6,503.1);


(lib.g_building3 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer 1
	this.shape = new cjs.Shape();
	this.shape.graphics.f("#B7B7B7").s().p("AgvAdIAAhuIBfA0IAABvg");
	this.shape.setTransform(51,77.9);

	this.shape_1 = new cjs.Shape();
	this.shape_1.graphics.f("#B7B7B7").s().p("AgvAdIAAhuIBfA1IAABug");
	this.shape_1.setTransform(40.8,72.3);

	this.shape_2 = new cjs.Shape();
	this.shape_2.graphics.f("#B7B7B7").s().p("AgvAdIAAhuIBfA1IAABug");
	this.shape_2.setTransform(30.6,66.8);

	this.shape_3 = new cjs.Shape();
	this.shape_3.graphics.f("#B7B7B7").s().p("AgvAdIAAhuIBfA0IAABvg");
	this.shape_3.setTransform(20.4,61.2);

	this.shape_4 = new cjs.Shape();
	this.shape_4.graphics.f("#B7B7B7").s().p("AgvAeIAAhvIBfA1IAABug");
	this.shape_4.setTransform(10.2,55.6);

	this.shape_5 = new cjs.Shape();
	this.shape_5.graphics.f("#465059").s().p("Aj+hQIAAh1IH9EVIAAB1g");
	this.shape_5.setTransform(30.3,66.9);

	this.shape_6 = new cjs.Shape();
	this.shape_6.graphics.f("#B7B7B7").s().p("AgvAdIAAhuIBfA0IAABvg");
	this.shape_6.setTransform(51,123);

	this.shape_7 = new cjs.Shape();
	this.shape_7.graphics.f("#B7B7B7").s().p("AgvAdIAAhuIBfA1IAABug");
	this.shape_7.setTransform(40.8,117.5);

	this.shape_8 = new cjs.Shape();
	this.shape_8.graphics.f("#B7B7B7").s().p("AgvAeIAAhvIBfA0IAABvg");
	this.shape_8.setTransform(30.6,111.9);

	this.shape_9 = new cjs.Shape();
	this.shape_9.graphics.f("#B7B7B7").s().p("AgvAdIAAhuIBfA0IAABvg");
	this.shape_9.setTransform(20.4,106.4);

	this.shape_10 = new cjs.Shape();
	this.shape_10.graphics.f("#B7B7B7").s().p("AgvAdIAAhuIBfA1IAABug");
	this.shape_10.setTransform(10.2,100.8);

	this.shape_11 = new cjs.Shape();
	this.shape_11.graphics.f("#465059").s().p("Aj+hPIAAh2IH9EVIAAB1g");
	this.shape_11.setTransform(30.3,112.1);

	this.shape_12 = new cjs.Shape();
	this.shape_12.graphics.f("#B7B7B7").s().p("AgvAeIAAhvIBfA1IAABug");
	this.shape_12.setTransform(51,107.8);

	this.shape_13 = new cjs.Shape();
	this.shape_13.graphics.f("#B7B7B7").s().p("AgvAdIAAhuIBfA0IAABvg");
	this.shape_13.setTransform(40.8,102.2);

	this.shape_14 = new cjs.Shape();
	this.shape_14.graphics.f("#B7B7B7").s().p("AgvAdIAAhuIBfA1IAABug");
	this.shape_14.setTransform(30.6,96.7);

	this.shape_15 = new cjs.Shape();
	this.shape_15.graphics.f("#B7B7B7").s().p("AgvAeIAAhvIBfA0IAABvg");
	this.shape_15.setTransform(20.4,91.1);

	this.shape_16 = new cjs.Shape();
	this.shape_16.graphics.f("#B7B7B7").s().p("AgvAeIAAhvIBfA0IAABvg");
	this.shape_16.setTransform(10.2,85.6);

	this.shape_17 = new cjs.Shape();
	this.shape_17.graphics.f("#465059").s().p("Aj+hPIAAh1IH9EUIAAB2g");
	this.shape_17.setTransform(30.3,96.8);

	this.shape_18 = new cjs.Shape();
	this.shape_18.graphics.f("#B7B7B7").s().p("AgvAdIAAhuIBfA0IAABvg");
	this.shape_18.setTransform(51,92.9);

	this.shape_19 = new cjs.Shape();
	this.shape_19.graphics.f("#B7B7B7").s().p("AgvAdIAAhuIBfA1IAABug");
	this.shape_19.setTransform(40.8,87.3);

	this.shape_20 = new cjs.Shape();
	this.shape_20.graphics.f("#B7B7B7").s().p("AgvAeIAAhvIBfA0IAABvg");
	this.shape_20.setTransform(30.6,81.8);

	this.shape_21 = new cjs.Shape();
	this.shape_21.graphics.f("#B7B7B7").s().p("AgvAdIAAhuIBfA1IAABug");
	this.shape_21.setTransform(20.4,76.2);

	this.shape_22 = new cjs.Shape();
	this.shape_22.graphics.f("#B7B7B7").s().p("AgvAdIAAhuIBfA1IAABug");
	this.shape_22.setTransform(10.2,70.7);

	this.shape_23 = new cjs.Shape();
	this.shape_23.graphics.f("#465059").s().p("Aj+hPIAAh2IH9EVIAAB1g");
	this.shape_23.setTransform(30.3,81.9);

	this.shape_24 = new cjs.Shape();
	this.shape_24.graphics.f("#999999").s().p("AgzgcIBng1IAABuIhnA1g");
	this.shape_24.setTransform(71.3,77.8);

	this.shape_25 = new cjs.Shape();
	this.shape_25.graphics.f("#999999").s().p("Ag0gdIBpg0IAABuIhpA1g");
	this.shape_25.setTransform(82.4,72.2);

	this.shape_26 = new cjs.Shape();
	this.shape_26.graphics.f("#999999").s().p("Ag0gdIBpg0IAABuIhpA1g");
	this.shape_26.setTransform(93.6,66.6);

	this.shape_27 = new cjs.Shape();
	this.shape_27.graphics.f("#999999").s().p("Ag0gdIBog0IAABvIhoA0g");
	this.shape_27.setTransform(104.7,61.1);

	this.shape_28 = new cjs.Shape();
	this.shape_28.graphics.f("#999999").s().p("Ag0gcIBpg1IAABuIhpA1g");
	this.shape_28.setTransform(115.8,55.5);

	this.shape_29 = new cjs.Shape();
	this.shape_29.graphics.f("#465059").s().p("AkVBRIIskVIAAB1IosEVg");
	this.shape_29.setTransform(93.9,66.8);

	this.shape_30 = new cjs.Shape();
	this.shape_30.graphics.f("#999999").s().p("AgzgdIBng0IAABuIhnA1g");
	this.shape_30.setTransform(71.3,122.9);

	this.shape_31 = new cjs.Shape();
	this.shape_31.graphics.f("#999999").s().p("Ag0gdIBpg0IAABvIhpA0g");
	this.shape_31.setTransform(82.4,117.3);

	this.shape_32 = new cjs.Shape();
	this.shape_32.graphics.f("#999999").s().p("Ag0gcIBpg1IAABuIhpA1g");
	this.shape_32.setTransform(93.6,111.8);

	this.shape_33 = new cjs.Shape();
	this.shape_33.graphics.f("#999999").s().p("Ag0gcIBog1IAABuIhoA1g");
	this.shape_33.setTransform(104.7,106.2);

	this.shape_34 = new cjs.Shape();
	this.shape_34.graphics.f("#999999").s().p("Ag0gdIBpg0IAABuIhpA1g");
	this.shape_34.setTransform(115.8,100.7);

	this.shape_35 = new cjs.Shape();
	this.shape_35.graphics.f("#465059").s().p("AkVBQIIskVIAAB1IosEWg");
	this.shape_35.setTransform(93.9,112);

	this.shape_36 = new cjs.Shape();
	this.shape_36.graphics.f("#999999").s().p("AgzgcIBng1IAABuIhnA1g");
	this.shape_36.setTransform(71.3,107.7);

	this.shape_37 = new cjs.Shape();
	this.shape_37.graphics.f("#999999").s().p("Ag0gcIBpg1IAABuIhpA1g");
	this.shape_37.setTransform(82.4,102.1);

	this.shape_38 = new cjs.Shape();
	this.shape_38.graphics.f("#999999").s().p("Ag0gdIBpg0IAABuIhpA1g");
	this.shape_38.setTransform(93.6,96.6);

	this.shape_39 = new cjs.Shape();
	this.shape_39.graphics.f("#999999").s().p("Ag0gcIBog1IAABuIhoA1g");
	this.shape_39.setTransform(104.7,91);

	this.shape_40 = new cjs.Shape();
	this.shape_40.graphics.f("#999999").s().p("Ag0gcIBpg1IAABvIhpA0g");
	this.shape_40.setTransform(115.8,85.4);

	this.shape_41 = new cjs.Shape();
	this.shape_41.graphics.f("#465059").s().p("AkVBQIIskUIAAB1IosEUg");
	this.shape_41.setTransform(93.9,96.7);

	this.shape_42 = new cjs.Shape();
	this.shape_42.graphics.f("#999999").s().p("AgzgdIBng0IAABuIhnA1g");
	this.shape_42.setTransform(71.3,92.8);

	this.shape_43 = new cjs.Shape();
	this.shape_43.graphics.f("#999999").s().p("Ag0gcIBpg1IAABvIhpA0g");
	this.shape_43.setTransform(82.4,87.2);

	this.shape_44 = new cjs.Shape();
	this.shape_44.graphics.f("#999999").s().p("Ag0gdIBpg0IAABuIhpA1g");
	this.shape_44.setTransform(93.6,81.7);

	this.shape_45 = new cjs.Shape();
	this.shape_45.graphics.f("#999999").s().p("Ag0gcIBog1IAABuIhoA1g");
	this.shape_45.setTransform(104.7,76.1);

	this.shape_46 = new cjs.Shape();
	this.shape_46.graphics.f("#999999").s().p("Ag0gcIBpg1IAABuIhpA1g");
	this.shape_46.setTransform(115.8,70.6);

	this.shape_47 = new cjs.Shape();
	this.shape_47.graphics.f("#465059").s().p("AkVBQIIskVIAAB1IosEVg");
	this.shape_47.setTransform(93.9,81.8);

	this.shape_48 = new cjs.Shape();
	this.shape_48.graphics.f("#C7C7C7").s().p("AhIAMICRhJIAAAzIiRBIg");
	this.shape_48.setTransform(71.2,25.2);

	this.shape_49 = new cjs.Shape();
	this.shape_49.graphics.f("#E7E7E7").s().p("AiigLICThJICyBfIiTBJg");
	this.shape_49.setTransform(62.2,18);

	this.shape_50 = new cjs.Shape();
	this.shape_50.graphics.f("#DCDCDC").s().p("AhZgWIAAgyICzBfIAAAyg");
	this.shape_50.setTransform(54.9,24.1);

	this.shape_51 = new cjs.Shape();
	this.shape_51.graphics.f("#E7E7E7").s().p("AlNCdIKIlDIATAKIqIFDg");
	this.shape_51.setTransform(33.4,16.7);

	this.shape_52 = new cjs.Shape();
	this.shape_52.graphics.f("#E7E7E7").s().p("AlNCdIKIlDIATAKIqIFDg");
	this.shape_52.setTransform(92.2,48.8);

	this.shape_53 = new cjs.Shape();
	this.shape_53.graphics.f("#E7E7E7").s().p("Ak3igIARgJIJeFKIgRAJg");
	this.shape_53.setTransform(94.4,17);

	this.shape_54 = new cjs.Shape();
	this.shape_54.graphics.f("#E7E7E7").s().p("Ak3igIASgJIJdFKIgSAJg");
	this.shape_54.setTransform(31.2,48.5);

	this.shape_55 = new cjs.Shape();
	this.shape_55.graphics.f("#DCDCDC").s().p("AkuhsIAAhIIJdFKIhNAfg");
	this.shape_55.setTransform(95.3,18.1);

	this.shape_56 = new cjs.Shape();
	this.shape_56.graphics.f("#C7C7C7").s().p("AlECRIKJlCIAABHIo7Ecg");
	this.shape_56.setTransform(32.5,17.8);

	this.shape_57 = new cjs.Shape();
	this.shape_57.graphics.f("#E7E7E7").s().p("ApzgDIKIlDIJfFKIqJFDg");
	this.shape_57.setTransform(62.8,32.7);

	this.shape_58 = new cjs.Shape();
	this.shape_58.graphics.f("#C7C7C7").s().p("AlEjqIKJlEIAAMdIqJFAg");
	this.shape_58.setTransform(93.1,89);

	this.shape_59 = new cjs.Shape();
	this.shape_59.graphics.f("#C7C7C7").s().p("AgwAHIBhgvIAAAiIhhAvg");
	this.shape_59.setTransform(53.9,16.6);

	this.shape_60 = new cjs.Shape();
	this.shape_60.graphics.f("#DCDCDC").s().p("AiIgyIAAgiIERCHIAAAhg");
	this.shape_60.setTransform(62.6,25.8);

	this.shape_61 = new cjs.Shape();
	this.shape_61.graphics.f("#DCDCDC").s().p("AkuDnIAAsZIJdFLIAAMZg");
	this.shape_61.setTransform(30.3,88.6);

	this.shape_62 = new cjs.Shape();
	this.shape_62.graphics.f("#999999").s().p("AkxgSIJjkxIAAFZIpjEvg");
	this.shape_62.setTransform(91,142.3);

	this.shape_63 = new cjs.Shape();
	this.shape_63.graphics.f("#B7B7B7").s().p("AkdAQIAAlXII7E4IAAFXg");
	this.shape_63.setTransform(31.7,141.9);

	this.shape_64 = new cjs.Shape();
	this.shape_64.graphics.f("rgba(153,153,153,0.149)").s().p("Am2ENIjui8IInkFIAPjgIMSGkIsBGFg");
	this.shape_64.setTransform(104.3,147.8);

	this.timeline.addTween(cjs.Tween.get({}).to({state:[{t:this.shape_64},{t:this.shape_63},{t:this.shape_62},{t:this.shape_61},{t:this.shape_60},{t:this.shape_59},{t:this.shape_58},{t:this.shape_57},{t:this.shape_56},{t:this.shape_55},{t:this.shape_54},{t:this.shape_53},{t:this.shape_52},{t:this.shape_51},{t:this.shape_50},{t:this.shape_49},{t:this.shape_48},{t:this.shape_47},{t:this.shape_46},{t:this.shape_45},{t:this.shape_44},{t:this.shape_43},{t:this.shape_42},{t:this.shape_41},{t:this.shape_40},{t:this.shape_39},{t:this.shape_38},{t:this.shape_37},{t:this.shape_36},{t:this.shape_35},{t:this.shape_34},{t:this.shape_33},{t:this.shape_32},{t:this.shape_31},{t:this.shape_30},{t:this.shape_29},{t:this.shape_28},{t:this.shape_27},{t:this.shape_26},{t:this.shape_25},{t:this.shape_24},{t:this.shape_23},{t:this.shape_22},{t:this.shape_21},{t:this.shape_20},{t:this.shape_19},{t:this.shape_18},{t:this.shape_17},{t:this.shape_16},{t:this.shape_15},{t:this.shape_14},{t:this.shape_13},{t:this.shape_12},{t:this.shape_11},{t:this.shape_10},{t:this.shape_9},{t:this.shape_8},{t:this.shape_7},{t:this.shape_6},{t:this.shape_5},{t:this.shape_4},{t:this.shape_3},{t:this.shape_2},{t:this.shape_1},{t:this.shape}]}).wait(1));

}).prototype = p = new cjs.MovieClip();
p.nominalBounds = new cjs.Rectangle(0,0,171.9,188.3);


(lib.g_building2 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer 1
	this.shape = new cjs.Shape();
	this.shape.graphics.f("#DCDCDC").s().p("AgMCXIAAktIAZgMIAAFFg");
	this.shape.setTransform(101,120.9,0.636,0.636);

	this.shape_1 = new cjs.Shape();
	this.shape_1.graphics.f("#C7C7C7").s().p("AiDA2IEHiDIAAAZIkHCCg");
	this.shape_1.setTransform(93.5,134.7,0.636,0.636);

	this.shape_2 = new cjs.Shape();
	this.shape_2.graphics.f("#999999").s().p("AiDhhIEHiDIAAFFIkHCEg");
	this.shape_2.setTransform(93.5,125.1,0.636,0.636);

	this.shape_3 = new cjs.Shape();
	this.shape_3.graphics.f("#DCDCDC").s().p("AgMCXIAAksIAZgNIAAFFg");
	this.shape_3.setTransform(147.4,97.9,0.636,0.636);

	this.shape_4 = new cjs.Shape();
	this.shape_4.graphics.f("#C7C7C7").s().p("AiDA2IEHiDIAAAZIkHCCg");
	this.shape_4.setTransform(139.8,111.6,0.636,0.636);

	this.shape_5 = new cjs.Shape();
	this.shape_5.graphics.f("#999999").s().p("AiDhgIEHiEIAAFFIkHCEg");
	this.shape_5.setTransform(139.8,102.1,0.636,0.636);

	this.shape_6 = new cjs.Shape();
	this.shape_6.graphics.f("#DCDCDC").s().p("AgMCYIAAkuIAZgMIAAFFg");
	this.shape_6.setTransform(124.4,109.3,0.636,0.636);

	this.shape_7 = new cjs.Shape();
	this.shape_7.graphics.f("#C7C7C7").s().p("AiDA2IEHiDIAAAYIkHCDg");
	this.shape_7.setTransform(116.8,123.1,0.636,0.636);

	this.shape_8 = new cjs.Shape();
	this.shape_8.graphics.f("#999999").s().p("AiDhgIEHiEIAAFFIkHCEg");
	this.shape_8.setTransform(116.8,113.5,0.636,0.636);

	this.shape_9 = new cjs.Shape();
	this.shape_9.graphics.f("#999999").s().p("AgzgdIBng0IAABvIhnA0g");
	this.shape_9.setTransform(139.3,71.4,0.636,0.636);

	this.shape_10 = new cjs.Shape();
	this.shape_10.graphics.f("#999999").s().p("Ag0gcIBpg1IAABvIhpA0g");
	this.shape_10.setTransform(146.4,67.9,0.636,0.636);

	this.shape_11 = new cjs.Shape();
	this.shape_11.graphics.f("#999999").s().p("Ag0gcIBpg1IAABuIhpA1g");
	this.shape_11.setTransform(153.5,64.4,0.636,0.636);

	this.shape_12 = new cjs.Shape();
	this.shape_12.graphics.f("#999999").s().p("Ag0gcIBog1IAABuIhoA1g");
	this.shape_12.setTransform(160.6,60.8,0.636,0.636);

	this.shape_13 = new cjs.Shape();
	this.shape_13.graphics.f("#999999").s().p("Ag0gdIBpg0IAABuIhpA1g");
	this.shape_13.setTransform(167.6,57.3,0.636,0.636);

	this.shape_14 = new cjs.Shape();
	this.shape_14.graphics.f("#465059").s().p("AkVBQIIskUIAAB1IosEVg");
	this.shape_14.setTransform(153.7,64.5,0.636,0.636);

	this.shape_15 = new cjs.Shape();
	this.shape_15.graphics.f("#999999").s().p("AgzgcIBng1IAABuIhnA1g");
	this.shape_15.setTransform(139.3,61.8,0.636,0.636);

	this.shape_16 = new cjs.Shape();
	this.shape_16.graphics.f("#999999").s().p("Ag0gcIBpg1IAABuIhpA1g");
	this.shape_16.setTransform(146.4,58.2,0.636,0.636);

	this.shape_17 = new cjs.Shape();
	this.shape_17.graphics.f("#999999").s().p("Ag0gdIBpg0IAABuIhpA1g");
	this.shape_17.setTransform(153.5,54.7,0.636,0.636);

	this.shape_18 = new cjs.Shape();
	this.shape_18.graphics.f("#999999").s().p("Ag0gcIBog1IAABuIhoA1g");
	this.shape_18.setTransform(160.6,51.2,0.636,0.636);

	this.shape_19 = new cjs.Shape();
	this.shape_19.graphics.f("#999999").s().p("Ag0gdIBpg0IAABvIhpA0g");
	this.shape_19.setTransform(167.6,47.6,0.636,0.636);

	this.shape_20 = new cjs.Shape();
	this.shape_20.graphics.f("#465059").s().p("AkVBQIIskVIAAB1IosEVg");
	this.shape_20.setTransform(153.7,54.8,0.636,0.636);

	this.shape_21 = new cjs.Shape();
	this.shape_21.graphics.f("#999999").s().p("Ag0gdIBog0IAABvIhoA0g");
	this.shape_21.setTransform(98.4,63.6,0.636,0.636);

	this.shape_22 = new cjs.Shape();
	this.shape_22.graphics.f("#999999").s().p("Ag0gcIBpg1IAABuIhpA1g");
	this.shape_22.setTransform(105.6,60,0.636,0.636);

	this.shape_23 = new cjs.Shape();
	this.shape_23.graphics.f("#999999").s().p("Ag0gdIBpg0IAABvIhpA0g");
	this.shape_23.setTransform(112.6,56.5,0.636,0.636);

	this.shape_24 = new cjs.Shape();
	this.shape_24.graphics.f("#999999").s().p("Ag0gcIBpg1IAABuIhpA1g");
	this.shape_24.setTransform(119.7,53,0.636,0.636);

	this.shape_25 = new cjs.Shape();
	this.shape_25.graphics.f("#999999").s().p("Ag0gcIBpg1IAABuIhpA1g");
	this.shape_25.setTransform(126.8,49.5,0.636,0.636);

	this.shape_26 = new cjs.Shape();
	this.shape_26.graphics.f("#465059").s().p("AkWBRIIskWIAAB1IosEVg");
	this.shape_26.setTransform(112.8,56.6,0.636,0.636);

	this.shape_27 = new cjs.Shape();
	this.shape_27.graphics.f("#999999").s().p("Ag0gcIBpg1IAABuIhpA1g");
	this.shape_27.setTransform(56.7,112.7,0.636,0.636);

	this.shape_28 = new cjs.Shape();
	this.shape_28.graphics.f("#999999").s().p("Ag0gcIBog1IAABvIhoA0g");
	this.shape_28.setTransform(63.8,109.2,0.636,0.636);

	this.shape_29 = new cjs.Shape();
	this.shape_29.graphics.f("#999999").s().p("Ag0gdIBpg0IAABuIhpA1g");
	this.shape_29.setTransform(70.9,105.7,0.636,0.636);

	this.shape_30 = new cjs.Shape();
	this.shape_30.graphics.f("#999999").s().p("AgzgcIBng1IAABuIhnA1g");
	this.shape_30.setTransform(78,102.1,0.636,0.636);

	this.shape_31 = new cjs.Shape();
	this.shape_31.graphics.f("#999999").s().p("Ag0gdIBpg0IAABvIhpA0g");
	this.shape_31.setTransform(85,98.6,0.636,0.636);

	this.shape_32 = new cjs.Shape();
	this.shape_32.graphics.f("#465059").s().p("AkVBQIIskVIAAB2IosEUg");
	this.shape_32.setTransform(71.1,105.8,0.636,0.636);

	this.shape_33 = new cjs.Shape();
	this.shape_33.graphics.f("#999999").s().p("Ag0gdIBpg0IAABuIhpA1g");
	this.shape_33.setTransform(56.7,103.1,0.636,0.636);

	this.shape_34 = new cjs.Shape();
	this.shape_34.graphics.f("#999999").s().p("Ag0gcIBog1IAABuIhoA1g");
	this.shape_34.setTransform(63.8,99.5,0.636,0.636);

	this.shape_35 = new cjs.Shape();
	this.shape_35.graphics.f("#999999").s().p("Ag0gdIBpg0IAABvIhpA0g");
	this.shape_35.setTransform(70.9,96,0.636,0.636);

	this.shape_36 = new cjs.Shape();
	this.shape_36.graphics.f("#999999").s().p("AgzgdIBng0IAABuIhnA1g");
	this.shape_36.setTransform(78,92.5,0.636,0.636);

	this.shape_37 = new cjs.Shape();
	this.shape_37.graphics.f("#999999").s().p("Ag0gcIBpg1IAABuIhpA1g");
	this.shape_37.setTransform(85,88.9,0.636,0.636);

	this.shape_38 = new cjs.Shape();
	this.shape_38.graphics.f("#465059").s().p("AkVBQIIskVIAAB2IosEUg");
	this.shape_38.setTransform(71.1,96.1,0.636,0.636);

	this.shape_39 = new cjs.Shape();
	this.shape_39.graphics.f("#999999").s().p("Ag0gcIBog1IAABuIhoA1g");
	this.shape_39.setTransform(98.4,92.3,0.636,0.636);

	this.shape_40 = new cjs.Shape();
	this.shape_40.graphics.f("#999999").s().p("Ag0gdIBpg0IAABuIhpA1g");
	this.shape_40.setTransform(105.6,88.7,0.636,0.636);

	this.shape_41 = new cjs.Shape();
	this.shape_41.graphics.f("#999999").s().p("Ag0gcIBpg1IAABuIhpA1g");
	this.shape_41.setTransform(112.6,85.2,0.636,0.636);

	this.shape_42 = new cjs.Shape();
	this.shape_42.graphics.f("#999999").s().p("Ag0gdIBpg0IAABvIhpA0g");
	this.shape_42.setTransform(119.7,81.7,0.636,0.636);

	this.shape_43 = new cjs.Shape();
	this.shape_43.graphics.f("#999999").s().p("Ag0gdIBpg0IAABuIhpA1g");
	this.shape_43.setTransform(126.8,78.2,0.636,0.636);

	this.shape_44 = new cjs.Shape();
	this.shape_44.graphics.f("#465059").s().p("AkWBRIIskVIAAB1IosEVg");
	this.shape_44.setTransform(112.8,85.3,0.636,0.636);

	this.shape_45 = new cjs.Shape();
	this.shape_45.graphics.f("#999999").s().p("Ag0gdIBog0IAABvIhoA0g");
	this.shape_45.setTransform(98.4,82.6,0.636,0.636);

	this.shape_46 = new cjs.Shape();
	this.shape_46.graphics.f("#999999").s().p("Ag0gdIBpg0IAABuIhpA1g");
	this.shape_46.setTransform(105.6,79,0.636,0.636);

	this.shape_47 = new cjs.Shape();
	this.shape_47.graphics.f("#999999").s().p("Ag0gdIBpg0IAABvIhpA0g");
	this.shape_47.setTransform(112.6,75.5,0.636,0.636);

	this.shape_48 = new cjs.Shape();
	this.shape_48.graphics.f("#999999").s().p("Ag0gcIBpg1IAABuIhpA1g");
	this.shape_48.setTransform(119.7,72,0.636,0.636);

	this.shape_49 = new cjs.Shape();
	this.shape_49.graphics.f("#999999").s().p("Ag0gdIBpg0IAABuIhpA1g");
	this.shape_49.setTransform(126.8,68.5,0.636,0.636);

	this.shape_50 = new cjs.Shape();
	this.shape_50.graphics.f("#465059").s().p("AkWBQIIskVIAAB2IosEVg");
	this.shape_50.setTransform(112.8,75.6,0.636,0.636);

	this.shape_51 = new cjs.Shape();
	this.shape_51.graphics.f("#999999").s().p("Ag0gcIBog1IAABuIhoA1g");
	this.shape_51.setTransform(98.4,73.1,0.636,0.636);

	this.shape_52 = new cjs.Shape();
	this.shape_52.graphics.f("#999999").s().p("Ag0gdIBpg0IAABuIhpA1g");
	this.shape_52.setTransform(105.6,69.6,0.636,0.636);

	this.shape_53 = new cjs.Shape();
	this.shape_53.graphics.f("#999999").s().p("Ag0gcIBpg1IAABuIhpA1g");
	this.shape_53.setTransform(112.6,66,0.636,0.636);

	this.shape_54 = new cjs.Shape();
	this.shape_54.graphics.f("#999999").s().p("Ag0gdIBpg0IAABvIhpA0g");
	this.shape_54.setTransform(119.7,62.5,0.636,0.636);

	this.shape_55 = new cjs.Shape();
	this.shape_55.graphics.f("#999999").s().p("Ag0gdIBpg0IAABuIhpA1g");
	this.shape_55.setTransform(126.8,59,0.636,0.636);

	this.shape_56 = new cjs.Shape();
	this.shape_56.graphics.f("#465059").s().p("AkWBQIIskVIAAB2IosEVg");
	this.shape_56.setTransform(112.8,66.2,0.636,0.636);

	this.shape_57 = new cjs.Shape();
	this.shape_57.graphics.f("#C7C7C7").s().p("AhIAMICRhJIAAAzIiRBIg");
	this.shape_57.setTransform(73.4,17.5,0.636,0.636);

	this.shape_58 = new cjs.Shape();
	this.shape_58.graphics.f("#E7E7E7").s().p("AiigKICThJICyBeIiTBKg");
	this.shape_58.setTransform(67.7,12.9,0.636,0.636);

	this.shape_59 = new cjs.Shape();
	this.shape_59.graphics.f("#DCDCDC").s().p("AhZgWIAAgyICzBfIAAAyg");
	this.shape_59.setTransform(63,16.8,0.636,0.636);

	this.shape_60 = new cjs.Shape();
	this.shape_60.graphics.f("#C7C7C7").s().p("AgwAIIBhgwIAAAhIhhAwg");
	this.shape_60.setTransform(55.4,77.8,0.636,0.636);

	this.shape_61 = new cjs.Shape();
	this.shape_61.graphics.f("#E7E7E7").s().p("AhsgGIBigxIB3A/IhiAwg");
	this.shape_61.setTransform(51.6,74.7,0.636,0.636);

	this.shape_62 = new cjs.Shape();
	this.shape_62.graphics.f("#DCDCDC").s().p("Ag7gOIAAgiIB3A/IAAAhg");
	this.shape_62.setTransform(48.5,77.4,0.636,0.636);

	this.shape_63 = new cjs.Shape();
	this.shape_63.graphics.f("#C7C7C7").s().p("AhJALICThIIAAAyIiTBJg");
	this.shape_63.setTransform(74.8,74.7,0.636,0.636);

	this.shape_64 = new cjs.Shape();
	this.shape_64.graphics.f("#E7E7E7").s().p("AiigKICThKICyBgIiTBJg");
	this.shape_64.setTransform(69.1,70,0.636,0.636);

	this.shape_65 = new cjs.Shape();
	this.shape_65.graphics.f("#DCDCDC").s().p("AhZgWIAAgyICzBfIAAAyg");
	this.shape_65.setTransform(64.4,74,0.636,0.636);

	this.shape_66 = new cjs.Shape();
	this.shape_66.graphics.f("#E7E7E7").s().p("AlNCdIKJlDIASAKIqIFDg");
	this.shape_66.setTransform(46.5,10.6,0.636,0.636);

	this.shape_67 = new cjs.Shape();
	this.shape_67.graphics.f("#E7E7E7").s().p("AlNCdIKIlDIATAKIqIFDg");
	this.shape_67.setTransform(111.8,45.1,0.636,0.636);

	this.shape_68 = new cjs.Shape();
	this.shape_68.graphics.f("#E7E7E7").s().p("AoSkPIARgJIQVIoIgSAJg");
	this.shape_68.setTransform(99.2,17.9,0.636,0.636);

	this.shape_69 = new cjs.Shape();
	this.shape_69.graphics.f("#E7E7E7").s().p("AoTkPIASgJIQUIoIgRAJg");
	this.shape_69.setTransform(59,37.9,0.636,0.636);

	this.shape_70 = new cjs.Shape();
	this.shape_70.graphics.f("#DCDCDC").s().p("AoKjcIAAhHIQVIoIhOAfg");
	this.shape_70.setTransform(99.8,18.6,0.636,0.636);

	this.shape_71 = new cjs.Shape();
	this.shape_71.graphics.f("#C7C7C7").s().p("AlECRIKJlCIAABHIo7Ecg");
	this.shape_71.setTransform(45.9,11.4,0.636,0.636);

	this.shape_72 = new cjs.Shape();
	this.shape_72.graphics.f("#E7E7E7").s().p("AtPhyIKKlDIQVIoIqKFDg");
	this.shape_72.setTransform(79.1,27.9,0.636,0.636);

	this.shape_73 = new cjs.Shape();
	this.shape_73.graphics.f("#898989").s().p("AvNEZIebvJIAAGYI+bPJg");
	this.shape_73.setTransform(112.4,112.9,0.636,0.636);

	this.shape_74 = new cjs.Shape();
	this.shape_74.graphics.f("#C7C7C7").s().p("AlDi1IKIlDIAAKuIqIFDg");
	this.shape_74.setTransform(153.7,63.3,0.636,0.636);

	this.shape_75 = new cjs.Shape();
	this.shape_75.graphics.f("#C7C7C7").s().p("AlEk3IKJlEIAAOzIqJFEg");
	this.shape_75.setTransform(112.4,75.6,0.636,0.636);

	this.shape_76 = new cjs.Shape();
	this.shape_76.graphics.f("#C7C7C7").s().p("AgwAIIBhgwIAAAhIhhAwg");
	this.shape_76.setTransform(137.5,36.5,0.636,0.636);

	this.shape_77 = new cjs.Shape();
	this.shape_77.graphics.f("#E7E7E7").s().p("AhsgGIBigyIB3A/IhiAyg");
	this.shape_77.setTransform(133.7,33.4,0.636,0.636);

	this.shape_78 = new cjs.Shape();
	this.shape_78.graphics.f("#DCDCDC").s().p("Ag7gOIAAghIB3A/IAAAgg");
	this.shape_78.setTransform(130.6,36,0.636,0.636);

	this.shape_79 = new cjs.Shape();
	this.shape_79.graphics.f("#C7C7C7").s().p("AhJALICThIIAAAyIiTBJg");
	this.shape_79.setTransform(156.9,33.3,0.636,0.636);

	this.shape_80 = new cjs.Shape();
	this.shape_80.graphics.f("#E7E7E7").s().p("AiigKICThJICyBeIiTBJg");
	this.shape_80.setTransform(151.2,28.7,0.636,0.636);

	this.shape_81 = new cjs.Shape();
	this.shape_81.graphics.f("#DCDCDC").s().p("AhZgWIAAgyICzBeIAAAzg");
	this.shape_81.setTransform(146.5,32.6,0.636,0.636);

	this.shape_82 = new cjs.Shape();
	this.shape_82.graphics.f("#C7C7C7").s().p("AlDkjIKHlEIAAKvIqHIfg");
	this.shape_82.setTransform(71.1,111.5,0.636,0.636);

	this.shape_83 = new cjs.Shape();
	this.shape_83.graphics.f("#E7E7E7").s().p("ArQgxIKJlDIMYGmIqJFDg");
	this.shape_83.setTransform(128.5,28.3,0.636,0.636);

	this.shape_84 = new cjs.Shape();
	this.shape_84.graphics.f("#999999").s().p("AmLgGIAAmYIMXGlIAAGYg");
	this.shape_84.setTransform(25.2,130.4,0.636,0.636);

	this.shape_85 = new cjs.Shape();
	this.shape_85.graphics.f("#E7E7E7").s().p("ArQgxIKJlDIMYGlIqJFEg");
	this.shape_85.setTransform(45.9,69.2,0.636,0.636);

	this.shape_86 = new cjs.Shape();
	this.shape_86.graphics.f("#DCDCDC").s().p("AmLAVIAAqtIMXGmIAAOLg");
	this.shape_86.setTransform(25.2,108.3,0.636,0.636);

	this.shape_87 = new cjs.Shape();
	this.shape_87.graphics.f("#DCDCDC").s().p("AoKDDIAAuvIQVIqIAAOug");
	this.shape_87.setTransform(58.5,68.2,0.636,0.636);

	this.timeline.addTween(cjs.Tween.get({}).to({state:[{t:this.shape_87},{t:this.shape_86},{t:this.shape_85},{t:this.shape_84},{t:this.shape_83},{t:this.shape_82},{t:this.shape_81},{t:this.shape_80},{t:this.shape_79},{t:this.shape_78},{t:this.shape_77},{t:this.shape_76},{t:this.shape_75},{t:this.shape_74},{t:this.shape_73},{t:this.shape_72},{t:this.shape_71},{t:this.shape_70},{t:this.shape_69},{t:this.shape_68},{t:this.shape_67},{t:this.shape_66},{t:this.shape_65},{t:this.shape_64},{t:this.shape_63},{t:this.shape_62},{t:this.shape_61},{t:this.shape_60},{t:this.shape_59},{t:this.shape_58},{t:this.shape_57},{t:this.shape_56},{t:this.shape_55},{t:this.shape_54},{t:this.shape_53},{t:this.shape_52},{t:this.shape_51},{t:this.shape_50},{t:this.shape_49},{t:this.shape_48},{t:this.shape_47},{t:this.shape_46},{t:this.shape_45},{t:this.shape_44},{t:this.shape_43},{t:this.shape_42},{t:this.shape_41},{t:this.shape_40},{t:this.shape_39},{t:this.shape_38},{t:this.shape_37},{t:this.shape_36},{t:this.shape_35},{t:this.shape_34},{t:this.shape_33},{t:this.shape_32},{t:this.shape_31},{t:this.shape_30},{t:this.shape_29},{t:this.shape_28},{t:this.shape_27},{t:this.shape_26},{t:this.shape_25},{t:this.shape_24},{t:this.shape_23},{t:this.shape_22},{t:this.shape_21},{t:this.shape_20},{t:this.shape_19},{t:this.shape_18},{t:this.shape_17},{t:this.shape_16},{t:this.shape_15},{t:this.shape_14},{t:this.shape_13},{t:this.shape_12},{t:this.shape_11},{t:this.shape_10},{t:this.shape_9},{t:this.shape_8},{t:this.shape_7},{t:this.shape_6},{t:this.shape_5},{t:this.shape_4},{t:this.shape_3},{t:this.shape_2},{t:this.shape_1},{t:this.shape}]}).wait(1));

	// Layer 2
	this.shape_88 = new cjs.Shape();
	this.shape_88.graphics.f("rgba(153,153,153,0.149)").s().p("AsgLEIoXmoITYpLIASnmIWFLxI50M6g");
	this.shape_88.setTransform(109.3,104.7,0.736,0.735);

	this.timeline.addTween(cjs.Tween.get(this.shape_88).wait(1));

}).prototype = p = new cjs.MovieClip();
p.nominalBounds = new cjs.Rectangle(0,0,207.6,162.8);


(lib.g_building1 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer 1
	this.shape = new cjs.Shape();
	this.shape.graphics.f("#FC6621").s().p("AgKCCIAAkEIAVgKIAAEZg");
	this.shape.setTransform(138.4,150.2,0.735,0.735);

	this.shape_1 = new cjs.Shape();
	this.shape_1.graphics.f("#BD551D").s().p("AhxAuIDjhxIAAAWIjjBxg");
	this.shape_1.setTransform(130.8,164,0.735,0.735);

	this.shape_2 = new cjs.Shape();
	this.shape_2.graphics.f("#999999").s().p("AhxhTIDjhyIAAEZIjjByg");
	this.shape_2.setTransform(130.8,154.4,0.735,0.735);

	this.shape_3 = new cjs.Shape();
	this.shape_3.graphics.f("#FC6621").s().p("AgKCDIAAkEIAVgLIAAEZg");
	this.shape_3.setTransform(184.8,127.2,0.735,0.735);

	this.shape_4 = new cjs.Shape();
	this.shape_4.graphics.f("#BD551D").s().p("AhxAuIDjhxIAAAWIjjBxg");
	this.shape_4.setTransform(177.2,140.9,0.735,0.735);

	this.shape_5 = new cjs.Shape();
	this.shape_5.graphics.f("#999999").s().p("AhxhUIDjhxIAAEZIjjByg");
	this.shape_5.setTransform(177.2,131.4,0.735,0.735);

	this.shape_6 = new cjs.Shape();
	this.shape_6.graphics.f("#FC6621").s().p("AgKCDIAAkEIAVgLIAAEZg");
	this.shape_6.setTransform(161.7,138.6,0.735,0.735);

	this.shape_7 = new cjs.Shape();
	this.shape_7.graphics.f("#BD551D").s().p("AhxAuIDjhxIAAAWIjjBxg");
	this.shape_7.setTransform(154.2,152.4,0.735,0.735);

	this.shape_8 = new cjs.Shape();
	this.shape_8.graphics.f("#999999").s().p("AhxhTIDjhyIAAEZIjjByg");
	this.shape_8.setTransform(154.2,142.8,0.735,0.735);

	this.shape_9 = new cjs.Shape();
	this.shape_9.graphics.f("#999999").s().p("AgtgZIBbgtIAABgIhbAtg");
	this.shape_9.setTransform(176.6,100.7,0.735,0.735);

	this.shape_10 = new cjs.Shape();
	this.shape_10.graphics.f("#999999").s().p("AgsgZIBagtIAABfIhaAug");
	this.shape_10.setTransform(183.7,97.2,0.735,0.735);

	this.shape_11 = new cjs.Shape();
	this.shape_11.graphics.f("#999999").s().p("AgsgYIBZguIAABgIhZAtg");
	this.shape_11.setTransform(190.8,93.7,0.735,0.735);

	this.shape_12 = new cjs.Shape();
	this.shape_12.graphics.f("#999999").s().p("AgsgZIBagtIAABfIhaAug");
	this.shape_12.setTransform(197.9,90.1,0.735,0.735);

	this.shape_13 = new cjs.Shape();
	this.shape_13.graphics.f("#999999").s().p("AgsgYIBaguIAABgIhaAtg");
	this.shape_13.setTransform(205,86.6,0.735,0.735);

	this.shape_14 = new cjs.Shape();
	this.shape_14.graphics.f("#465059").s().p("AjwBFIHhjvIAABmInhDvg");
	this.shape_14.setTransform(191,93.8,0.735,0.735);

	this.shape_15 = new cjs.Shape();
	this.shape_15.graphics.f("#999999").s().p("AgtgZIBbgtIAABfIhbAug");
	this.shape_15.setTransform(176.6,91,0.735,0.735);

	this.shape_16 = new cjs.Shape();
	this.shape_16.graphics.f("#999999").s().p("AgsgZIBagtIAABgIhaAtg");
	this.shape_16.setTransform(183.7,87.5,0.735,0.735);

	this.shape_17 = new cjs.Shape();
	this.shape_17.graphics.f("#999999").s().p("AgsgZIBZgtIAABgIhZAtg");
	this.shape_17.setTransform(190.8,84,0.735,0.735);

	this.shape_18 = new cjs.Shape();
	this.shape_18.graphics.f("#999999").s().p("AgsgYIBaguIAABfIhaAug");
	this.shape_18.setTransform(197.9,80.4,0.735,0.735);

	this.shape_19 = new cjs.Shape();
	this.shape_19.graphics.f("#999999").s().p("AgsgZIBagtIAABfIhaAug");
	this.shape_19.setTransform(205,76.9,0.735,0.735);

	this.shape_20 = new cjs.Shape();
	this.shape_20.graphics.f("#465059").s().p("AjwBGIHhjwIAABmInhDvg");
	this.shape_20.setTransform(191,84.1,0.735,0.735);

	this.shape_21 = new cjs.Shape();
	this.shape_21.graphics.f("#999999").s().p("AgtgYIBbguIAABgIhbAtg");
	this.shape_21.setTransform(135.8,92.8,0.735,0.735);

	this.shape_22 = new cjs.Shape();
	this.shape_22.graphics.f("#999999").s().p("AgtgZIBagtIAABfIhaAug");
	this.shape_22.setTransform(142.9,89.3,0.735,0.735);

	this.shape_23 = new cjs.Shape();
	this.shape_23.graphics.f("#999999").s().p("AgsgZIBagtIAABfIhaAug");
	this.shape_23.setTransform(150,85.8,0.735,0.735);

	this.shape_24 = new cjs.Shape();
	this.shape_24.graphics.f("#999999").s().p("AgsgZIBagtIAABfIhaAug");
	this.shape_24.setTransform(157.1,82.3,0.735,0.735);

	this.shape_25 = new cjs.Shape();
	this.shape_25.graphics.f("#999999").s().p("AgsgZIBagtIAABfIhaAug");
	this.shape_25.setTransform(164.1,78.7,0.735,0.735);

	this.shape_26 = new cjs.Shape();
	this.shape_26.graphics.f("#465059").s().p("AjwBFIHhjvIAABlInhDwg");
	this.shape_26.setTransform(150.2,85.9,0.735,0.735);

	this.shape_27 = new cjs.Shape();
	this.shape_27.graphics.f("#999999").s().p("AgsgZIBagtIAABfIhaAug");
	this.shape_27.setTransform(94.1,142,0.735,0.735);

	this.shape_28 = new cjs.Shape();
	this.shape_28.graphics.f("#999999").s().p("AgtgZIBbgtIAABgIhbAtg");
	this.shape_28.setTransform(101.2,138.5,0.735,0.735);

	this.shape_29 = new cjs.Shape();
	this.shape_29.graphics.f("#999999").s().p("AgtgZIBagtIAABfIhaAug");
	this.shape_29.setTransform(108.3,135,0.735,0.735);

	this.shape_30 = new cjs.Shape();
	this.shape_30.graphics.f("#999999").s().p("AgtgZIBagtIAABgIhaAtg");
	this.shape_30.setTransform(115.4,131.4,0.735,0.735);

	this.shape_31 = new cjs.Shape();
	this.shape_31.graphics.f("#999999").s().p("AgsgYIBZguIAABfIhZAug");
	this.shape_31.setTransform(122.4,127.9,0.735,0.735);

	this.shape_32 = new cjs.Shape();
	this.shape_32.graphics.f("#465059").s().p("AjwBGIHhjwIAABmInhDvg");
	this.shape_32.setTransform(108.4,135.1,0.735,0.735);

	this.shape_33 = new cjs.Shape();
	this.shape_33.graphics.f("#999999").s().p("AgsgZIBagtIAABgIhaAtg");
	this.shape_33.setTransform(94.1,132.4,0.735,0.735);

	this.shape_34 = new cjs.Shape();
	this.shape_34.graphics.f("#999999").s().p("AgtgZIBbgtIAABfIhbAug");
	this.shape_34.setTransform(101.2,128.8,0.735,0.735);

	this.shape_35 = new cjs.Shape();
	this.shape_35.graphics.f("#999999").s().p("AgtgYIBaguIAABfIhaAug");
	this.shape_35.setTransform(108.3,125.3,0.735,0.735);

	this.shape_36 = new cjs.Shape();
	this.shape_36.graphics.f("#999999").s().p("AgtgZIBagtIAABfIhaAug");
	this.shape_36.setTransform(115.4,121.7,0.735,0.735);

	this.shape_37 = new cjs.Shape();
	this.shape_37.graphics.f("#999999").s().p("AgsgZIBZgtIAABfIhZAug");
	this.shape_37.setTransform(122.4,118.2,0.735,0.735);

	this.shape_38 = new cjs.Shape();
	this.shape_38.graphics.f("#465059").s().p("AjwBFIHhjvIAABlInhDwg");
	this.shape_38.setTransform(108.4,125.4,0.735,0.735);

	this.shape_39 = new cjs.Shape();
	this.shape_39.graphics.f("#999999").s().p("AgtgZIBbgtIAABfIhbAug");
	this.shape_39.setTransform(135.8,121.6,0.735,0.735);

	this.shape_40 = new cjs.Shape();
	this.shape_40.graphics.f("#999999").s().p("AgtgZIBagtIAABfIhaAug");
	this.shape_40.setTransform(142.9,118,0.735,0.735);

	this.shape_41 = new cjs.Shape();
	this.shape_41.graphics.f("#999999").s().p("AgsgYIBaguIAABfIhaAug");
	this.shape_41.setTransform(150,114.5,0.735,0.735);

	this.shape_42 = new cjs.Shape();
	this.shape_42.graphics.f("#999999").s().p("AgsgZIBagtIAABfIhaAug");
	this.shape_42.setTransform(157.1,111,0.735,0.735);

	this.shape_43 = new cjs.Shape();
	this.shape_43.graphics.f("#999999").s().p("AgsgZIBagtIAABfIhaAug");
	this.shape_43.setTransform(164.1,107.4,0.735,0.735);

	this.shape_44 = new cjs.Shape();
	this.shape_44.graphics.f("#465059").s().p("AjwBFIHhjvIAABlInhDwg");
	this.shape_44.setTransform(150.2,114.6,0.735,0.735);

	this.shape_45 = new cjs.Shape();
	this.shape_45.graphics.f("#999999").s().p("AgtgZIBbgtIAABfIhbAug");
	this.shape_45.setTransform(135.8,111.9,0.735,0.735);

	this.shape_46 = new cjs.Shape();
	this.shape_46.graphics.f("#999999").s().p("AgtgYIBaguIAABgIhaAtg");
	this.shape_46.setTransform(142.9,108.3,0.735,0.735);

	this.shape_47 = new cjs.Shape();
	this.shape_47.graphics.f("#999999").s().p("AgsgZIBagtIAABgIhaAtg");
	this.shape_47.setTransform(150,104.8,0.735,0.735);

	this.shape_48 = new cjs.Shape();
	this.shape_48.graphics.f("#999999").s().p("AgsgYIBaguIAABgIhaAtg");
	this.shape_48.setTransform(157.1,101.3,0.735,0.735);

	this.shape_49 = new cjs.Shape();
	this.shape_49.graphics.f("#999999").s().p("AgsgZIBagtIAABfIhaAug");
	this.shape_49.setTransform(164.1,97.8,0.735,0.735);

	this.shape_50 = new cjs.Shape();
	this.shape_50.graphics.f("#465059").s().p("AjwBFIHhjvIAABmInhDvg");
	this.shape_50.setTransform(150.2,104.9,0.735,0.735);

	this.shape_51 = new cjs.Shape();
	this.shape_51.graphics.f("#999999").s().p("AgtgYIBbguIAABgIhbAtg");
	this.shape_51.setTransform(135.8,102.4,0.735,0.735);

	this.shape_52 = new cjs.Shape();
	this.shape_52.graphics.f("#999999").s().p("AgtgZIBagtIAABgIhaAtg");
	this.shape_52.setTransform(142.9,98.9,0.735,0.735);

	this.shape_53 = new cjs.Shape();
	this.shape_53.graphics.f("#999999").s().p("AgsgZIBagtIAABfIhaAug");
	this.shape_53.setTransform(150,95.3,0.735,0.735);

	this.shape_54 = new cjs.Shape();
	this.shape_54.graphics.f("#999999").s().p("AgsgZIBagtIAABfIhaAug");
	this.shape_54.setTransform(157.1,91.8,0.735,0.735);

	this.shape_55 = new cjs.Shape();
	this.shape_55.graphics.f("#999999").s().p("AgsgZIBagtIAABfIhaAug");
	this.shape_55.setTransform(164.1,88.3,0.735,0.735);

	this.shape_56 = new cjs.Shape();
	this.shape_56.graphics.f("#465059").s().p("AjwBFIHhjvIAABlInhDwg");
	this.shape_56.setTransform(150.2,95.4,0.735,0.735);

	this.shape_57 = new cjs.Shape();
	this.shape_57.graphics.f("#CA561B").s().p("Ag/AKIB/g+IAAArIh/A+g");
	this.shape_57.setTransform(110.8,46.8,0.735,0.735);

	this.shape_58 = new cjs.Shape();
	this.shape_58.graphics.f("#F28A4B").s().p("AiMgJIB/g/ICaBSIh/A/g");
	this.shape_58.setTransform(105.1,42.2,0.735,0.735);

	this.shape_59 = new cjs.Shape();
	this.shape_59.graphics.f("#FC6621").s().p("AhNgTIAAgrICaBSIAAArg");
	this.shape_59.setTransform(100.4,46.1,0.735,0.735);

	this.shape_60 = new cjs.Shape();
	this.shape_60.graphics.f("#CA561B").s().p("AgqAHIBVgqIAAAdIhVAqg");
	this.shape_60.setTransform(92.8,107.1,0.735,0.735);

	this.shape_61 = new cjs.Shape();
	this.shape_61.graphics.f("#F28A4B").s().p("AhdgFIBVgrIBmA2IhVArg");
	this.shape_61.setTransform(89,104,0.735,0.735);

	this.shape_62 = new cjs.Shape();
	this.shape_62.graphics.f("#FC6621").s().p("AgzgMIAAgdIBnA2IAAAdg");
	this.shape_62.setTransform(85.9,106.7,0.735,0.735);

	this.shape_63 = new cjs.Shape();
	this.shape_63.graphics.f("#CA561B").s().p("Ag+AKIB+g+IAAArIh+A+g");
	this.shape_63.setTransform(112.2,104,0.735,0.735);

	this.shape_64 = new cjs.Shape();
	this.shape_64.graphics.f("#F28A4B").s().p("AiMgJIB/g/ICaBSIh/A/g");
	this.shape_64.setTransform(106.5,99.3,0.735,0.735);

	this.shape_65 = new cjs.Shape();
	this.shape_65.graphics.f("#FC6621").s().p("AhNgSIAAgsICbBRIAAAsg");
	this.shape_65.setTransform(101.8,103.2,0.735,0.735);

	this.shape_66 = new cjs.Shape();
	this.shape_66.graphics.f("#F28A4B").s().p("AkgCHIIxkWIAQAIIoxEXg");
	this.shape_66.setTransform(83.9,39.9,0.735,0.735);

	this.shape_67 = new cjs.Shape();
	this.shape_67.graphics.f("#F28A4B").s().p("AkgCIIIwkXIARAJIoxEWg");
	this.shape_67.setTransform(149.1,74.4,0.735,0.735);

	this.shape_68 = new cjs.Shape();
	this.shape_68.graphics.f("#F28A4B").s().p("AnKjqIAPgIIOHHeIgQAHg");
	this.shape_68.setTransform(136.6,47.1,0.735,0.735);

	this.shape_69 = new cjs.Shape();
	this.shape_69.graphics.f("#F28A4B").s().p("AnKjqIAOgIIOIHdIgQAIg");
	this.shape_69.setTransform(96.4,67.2,0.735,0.735);

	this.shape_70 = new cjs.Shape();
	this.shape_70.graphics.f("#FC6621").s().p("AnDi+IAAg+IOHHeIhDAag");
	this.shape_70.setTransform(137.1,47.9,0.735,0.735);

	this.shape_71 = new cjs.Shape();
	this.shape_71.graphics.f("#CA561B").s().p("AkYB+IIxkXIAAA+InuD1g");
	this.shape_71.setTransform(83.2,40.6,0.735,0.735);

	this.shape_72 = new cjs.Shape();
	this.shape_72.graphics.f("#F57D38").s().p("ArchiIIykYIOHHeIoyEXg");
	this.shape_72.setTransform(116.5,57.2,0.735,0.735);

	this.shape_73 = new cjs.Shape();
	this.shape_73.graphics.f("#BD551D").s().p("AtJDzIaTtGIAAFhI6TNGg");
	this.shape_73.setTransform(149.7,142.2,0.735,0.735);

	this.shape_74 = new cjs.Shape();
	this.shape_74.graphics.f("#CA561B").s().p("AkYicIIxkYIAAJRIoxEYg");
	this.shape_74.setTransform(191,92.6,0.735,0.735);

	this.shape_75 = new cjs.Shape();
	this.shape_75.graphics.f("#CA561B").s().p("AkYkNIIxkXIAAMyIoxEYg");
	this.shape_75.setTransform(149.7,104.9,0.735,0.735);

	this.shape_76 = new cjs.Shape();
	this.shape_76.graphics.f("#CA561B").s().p("AgqAHIBVgpIAAAcIhVAqg");
	this.shape_76.setTransform(174.9,65.8,0.735,0.735);

	this.shape_77 = new cjs.Shape();
	this.shape_77.graphics.f("#F28A4B").s().p("AhdgFIBVgrIBmA3IhVAqg");
	this.shape_77.setTransform(171.1,62.7,0.735,0.735);

	this.shape_78 = new cjs.Shape();
	this.shape_78.graphics.f("#FC6621").s().p("AgzgMIAAgdIBnA2IAAAdg");
	this.shape_78.setTransform(168,65.3,0.735,0.735);

	this.shape_79 = new cjs.Shape();
	this.shape_79.graphics.f("#CA561B").s().p("Ag+AKIB+g/IAAAsIh+A+g");
	this.shape_79.setTransform(194.3,62.6,0.735,0.735);

	this.shape_80 = new cjs.Shape();
	this.shape_80.graphics.f("#F28A4B").s().p("AiMgJIB/g/ICaBRIh/BAg");
	this.shape_80.setTransform(188.6,58,0.735,0.735);

	this.shape_81 = new cjs.Shape();
	this.shape_81.graphics.f("#FC6621").s().p("AhNgTIAAgrICbBSIAAArg");
	this.shape_81.setTransform(183.9,61.9,0.735,0.735);

	this.shape_82 = new cjs.Shape();
	this.shape_82.graphics.f("#CA561B").s().p("AkXj7IIvkYIAAJRIovHWg");
	this.shape_82.setTransform(108.4,140.8,0.735,0.735);

	this.shape_83 = new cjs.Shape();
	this.shape_83.graphics.f("#F57D38").s().p("ApugqIIxkYIKsFtIoxEYg");
	this.shape_83.setTransform(165.8,57.6,0.735,0.735);

	this.shape_84 = new cjs.Shape();
	this.shape_84.graphics.f("#CA561B").s().p("AlWgFIAAlhIKtFsIAAFhg");
	this.shape_84.setTransform(62.6,159.6,0.735,0.735);

	this.shape_85 = new cjs.Shape();
	this.shape_85.graphics.f("#F57D38").s().p("ApugqIIxkYIKsFtIoxEYg");
	this.shape_85.setTransform(83.2,98.5,0.735,0.735);

	this.shape_86 = new cjs.Shape();
	this.shape_86.graphics.f("#FC6621").s().p("AlWATIAApRIKtFtIAAMQg");
	this.shape_86.setTransform(62.6,137.6,0.735,0.735);

	this.shape_87 = new cjs.Shape();
	this.shape_87.graphics.f("#FC6621").s().p("AnDCpIAAsvIOHHeIAAMwg");
	this.shape_87.setTransform(95.8,97.5,0.735,0.735);

	this.shape_88 = new cjs.Shape();
	this.shape_88.graphics.f("rgba(153,153,153,0.149)").s().p("AsgLEIoXmoITYpLIASnmIWFLxI50M6g");
	this.shape_88.setTransform(146.7,134,0.735,0.735);

	this.timeline.addTween(cjs.Tween.get({}).to({state:[{t:this.shape_88},{t:this.shape_87},{t:this.shape_86},{t:this.shape_85},{t:this.shape_84},{t:this.shape_83},{t:this.shape_82},{t:this.shape_81},{t:this.shape_80},{t:this.shape_79},{t:this.shape_78},{t:this.shape_77},{t:this.shape_76},{t:this.shape_75},{t:this.shape_74},{t:this.shape_73},{t:this.shape_72},{t:this.shape_71},{t:this.shape_70},{t:this.shape_69},{t:this.shape_68},{t:this.shape_67},{t:this.shape_66},{t:this.shape_65},{t:this.shape_64},{t:this.shape_63},{t:this.shape_62},{t:this.shape_61},{t:this.shape_60},{t:this.shape_59},{t:this.shape_58},{t:this.shape_57},{t:this.shape_56},{t:this.shape_55},{t:this.shape_54},{t:this.shape_53},{t:this.shape_52},{t:this.shape_51},{t:this.shape_50},{t:this.shape_49},{t:this.shape_48},{t:this.shape_47},{t:this.shape_46},{t:this.shape_45},{t:this.shape_44},{t:this.shape_43},{t:this.shape_42},{t:this.shape_41},{t:this.shape_40},{t:this.shape_39},{t:this.shape_38},{t:this.shape_37},{t:this.shape_36},{t:this.shape_35},{t:this.shape_34},{t:this.shape_33},{t:this.shape_32},{t:this.shape_31},{t:this.shape_30},{t:this.shape_29},{t:this.shape_28},{t:this.shape_27},{t:this.shape_26},{t:this.shape_25},{t:this.shape_24},{t:this.shape_23},{t:this.shape_22},{t:this.shape_21},{t:this.shape_20},{t:this.shape_19},{t:this.shape_18},{t:this.shape_17},{t:this.shape_16},{t:this.shape_15},{t:this.shape_14},{t:this.shape_13},{t:this.shape_12},{t:this.shape_11},{t:this.shape_10},{t:this.shape_9},{t:this.shape_8},{t:this.shape_7},{t:this.shape_6},{t:this.shape_5},{t:this.shape_4},{t:this.shape_3},{t:this.shape_2},{t:this.shape_1},{t:this.shape}]}).wait(1));

}).prototype = p = new cjs.MovieClip();
p.nominalBounds = new cjs.Rectangle(37.4,29.3,207.6,162.8);


(lib.mc_van = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{Brake:1});

	// timeline functions:
	this.frame_0 = function() {
		this.stop();
	}

	// actions tween:
	this.timeline.addTween(cjs.Tween.get(this).call(this.frame_0).wait(45));

	// Above
	this.instance = new lib.g_van_top("synched",0);
	this.instance.parent = this;
	this.instance.setTransform(-18.6,-2.3,1,1,0,0,0,61.2,54);

	this.timeline.addTween(cjs.Tween.get(this.instance).to({regX:61.1,rotation:-2,x:-19.6,y:-1.3},14,cjs.Ease.get(1)).to({regX:61.2,rotation:0,x:-18.6,y:-2.3},15,cjs.Ease.get(-1)).to({regX:61.1,rotation:1,x:-17.6,y:-2.7},5).to({regX:61.2,rotation:0,x:-18.6,y:-2.3},10,cjs.Ease.get(1)).wait(1));

	// Wheels
	this.shape = new cjs.Shape();
	this.shape.graphics.f("#AAAAAA").s().p("AgWAqQgGgJAAgOQAAgRAIgQQAIgRAMgLQAKgEAIAFQALAHAAATQAAAQgKARQgJARgMAHQgGADgFAAQgFAAgEgDg");
	this.shape.setTransform(-33.9,44.4,0.5,0.5);

	this.shape_1 = new cjs.Shape();
	this.shape_1.graphics.f("#C7C7C7").s().p("AgaAxQgLgJAAgVQAAgTALgVQALgUAPgIQAOgHALAHQANAJAAAWQAAAUgLAUQgLAUgQAIQgGAEgHAAQgHAAgGgFg");
	this.shape_1.setTransform(-33.4,44.3,0.5,0.5);

	this.shape_2 = new cjs.Shape();
	this.shape_2.graphics.f("#DCDCDC").s().p("AgqBOQgSgOAAgiQAAggASggQASggAYgNQAXgMARALQAVAOAAAkQAAAggSAhQgSAggZANQgLAGgKAAQgMAAgJgIg");
	this.shape_2.setTransform(-33.4,44.4,0.5,0.5);

	this.shape_3 = new cjs.Shape();
	this.shape_3.graphics.f("#505960").s().p("AhICEQgfgYAAg4QAAg3Afg3QAeg3AqgVQAngUAdATQARALAJAVQAJAWAAAeQABA3gfA3QgeA3grAVQgTAKgRAAQgUAAgQgNg");
	this.shape_3.setTransform(-33.6,44.3,0.5,0.5);

	this.shape_4 = new cjs.Shape();
	this.shape_4.graphics.f("#2D353A").s().p("AhngyQAmgTAeATICLBOIgPAgg");
	this.shape_4.setTransform(-35.4,36.1,0.5,0.5);

	this.shape_5 = new cjs.Shape();
	this.shape_5.graphics.f("#3B454C").s().p("AiDgeQAagiAdgPQAngTAeATICLBPIg0Bag");
	this.shape_5.setTransform(-36.8,37.5,0.5,0.5);

	this.shape_6 = new cjs.Shape();
	this.shape_6.graphics.f("#414A51").s().p("AhsBpQgvgZAAhBQAAg3Aeg3QAfg2AqgWQAngTAdATICMBPIiCESg");
	this.shape_6.setTransform(-38,42.1,0.5,0.5);

	this.shape_7 = new cjs.Shape();
	this.shape_7.graphics.f("#AAAAAA").s().p("AgWArQgGgKAAgOQAAgRAIgQQAIgRAMgLQAKgEAIAFQALAHAAATQAAARgKAQQgJARgMAHQgGADgGAAQgEAAgEgCg");
	this.shape_7.setTransform(23.7,15.6,0.5,0.5);

	this.shape_8 = new cjs.Shape();
	this.shape_8.graphics.f("#C7C7C7").s().p("AgaAxQgLgJAAgVQAAgTALgVQALgUAPgIQAPgHAKAHQANAIAAAXQAAAUgLAUQgLAUgQAIQgHAEgGAAQgHAAgGgFg");
	this.shape_8.setTransform(24.2,15.6,0.5,0.5);

	this.shape_9 = new cjs.Shape();
	this.shape_9.graphics.f("#DCDCDC").s().p("AgqBOQgSgOAAghQAAghASggQASggAYgNQAXgMARAMQAVANAAAkQAAAhgSAgQgSAhgZAMQgLAGgKAAQgMAAgJgIg");
	this.shape_9.setTransform(24.2,15.6,0.5,0.5);

	this.shape_10 = new cjs.Shape();
	this.shape_10.graphics.f("#505960").s().p("AhICEQgfgYABg4QgBg3Afg3QAeg3AqgVQAngUAdATQAkAXAAA9QgBA3geA3QgeA2grAWQgTAKgSAAQgTAAgQgNg");
	this.shape_10.setTransform(24,15.5,0.5,0.5);

	this.shape_11 = new cjs.Shape();
	this.shape_11.graphics.f("#2D353A").s().p("AhngxQAmgUAeATICLBPIgPAfg");
	this.shape_11.setTransform(22.2,7.3,0.5,0.5);

	this.shape_12 = new cjs.Shape();
	this.shape_12.graphics.f("#3B454C").s().p("AiDgeQAZgiAegPQAngUAeAUICLBPIg0Bag");
	this.shape_12.setTransform(20.8,8.7,0.5,0.5);

	this.shape_13 = new cjs.Shape();
	this.shape_13.graphics.f("#414A51").s().p("AhsBpQgvgZAAhBQAAg3Aeg2QAfg3AqgVQAngUAdATICMBQIiCERg");
	this.shape_13.setTransform(19.6,13.3,0.5,0.5);

	this.timeline.addTween(cjs.Tween.get({}).to({state:[{t:this.shape_13},{t:this.shape_12},{t:this.shape_11},{t:this.shape_10},{t:this.shape_9},{t:this.shape_8},{t:this.shape_7},{t:this.shape_6},{t:this.shape_5},{t:this.shape_4},{t:this.shape_3},{t:this.shape_2},{t:this.shape_1},{t:this.shape}]}).wait(45));

	// Shadow
	this.shape_14 = new cjs.Shape();
	this.shape_14.graphics.f("rgba(153,153,153,0.149)").s().p("AuQMFIphk+IV30lIZsNnI3WLsIizgKIjnB0g");
	this.shape_14.setTransform(3.8,13.2,0.5,0.5);

	this.timeline.addTween(cjs.Tween.get(this.shape_14).wait(45));

}).prototype = p = new cjs.MovieClip();
p.nominalBounds = new cjs.Rectangle(-79.8,-56.3,159.8,112.7);


(lib.g_txt_pane = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer 2
	this.shape = new cjs.Shape();
	this.shape.graphics.f("#FF6600").s().p("A0cM2IgC5rMAo7AAAIABZrg");
	this.shape.setTransform(31.3,-66.8);

	this.timeline.addTween(cjs.Tween.get(this.shape).wait(1));

	// Layer 1
	this.instance = new lib.g_orangepaper("synched",0);
	this.instance.parent = this;
	this.instance.setTransform(187.1,-74,0.3,0.3,90,0,0,249.8,89.9);

	this.timeline.addTween(cjs.Tween.get(this.instance).wait(1));

}).prototype = p = new cjs.MovieClip();
p.nominalBounds = new cjs.Rectangle(-99.8,-149,313.8,164.5);


(lib.g_buildings = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer 1
	this.instance = new lib.g_building3("synched",0);
	this.instance.parent = this;
	this.instance.setTransform(242.5,422.1,0.631,0.631,0,0,0,86,94.2);

	this.instance_1 = new lib.g_building5("synched",0);
	this.instance_1.parent = this;
	this.instance_1.setTransform(369,321.3,0.42,0.42,0,0,0,210.1,241.5);

	this.instance_2 = new lib.g_building3("synched",0);
	this.instance_2.parent = this;
	this.instance_2.setTransform(477.9,304.4,0.631,0.631,0,0,0,86,94.2);

	this.instance_3 = new lib.g_building3("synched",0);
	this.instance_3.parent = this;
	this.instance_3.setTransform(553.5,262.3,0.631,0.631,0,0,0,86,94.2);

	this.instance_4 = new lib.g_building5("synched",0);
	this.instance_4.parent = this;
	this.instance_4.setTransform(671.6,161.5,0.42,0.42,0,0,0,210.1,241.5);

	this.instance_5 = new lib.g_building4("synched",0);
	this.instance_5.parent = this;
	this.instance_5.setTransform(781.1,132.2,0.42,0.42,0,0,0,230.4,251.7);

	this.instance_6 = new lib.g_building3("synched",0);
	this.instance_6.parent = this;
	this.instance_6.setTransform(873,94.2,0.631,0.631,0,0,0,86,94.2);

	this.instance_7 = new lib.g_building3("synched",0);
	this.instance_7.parent = this;
	this.instance_7.setTransform(923.4,69,0.631,0.631,0,0,0,86,94.2);

	this.instance_8 = new lib.g_building3("synched",0);
	this.instance_8.parent = this;
	this.instance_8.setTransform(973.9,43.8,0.631,0.631,0,0,0,86,94.2);

	this.timeline.addTween(cjs.Tween.get({}).to({state:[{t:this.instance_8},{t:this.instance_7},{t:this.instance_6},{t:this.instance_5},{t:this.instance_4},{t:this.instance_3},{t:this.instance_2},{t:this.instance_1},{t:this.instance}]}).wait(1));

}).prototype = p = new cjs.MovieClip();
p.nominalBounds = new cjs.Rectangle(188.2,-15.6,839.8,497);


// stage content:
(lib.tnt_fastshipping_728x090 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{Loop:1});

	// timeline functions:
	this.frame_0 = function() {
		this.loopCounter = 0;
		
		/*this.theTxt1="Want to keep up with the competition?";
		this.theTxt2="You’ll need a speedy partner";
		this.theTxt3="We’re Europe’s fastest shippers";
		this.theTxt4="My business needs TNT";*/
		
		this.theTxt1=dynamicContent.TNT_dynamic_Feed__always_on_display_Prospecting__Were_the_fastest[0].Copy_1;
		this.theTxt2=dynamicContent.TNT_dynamic_Feed__always_on_display_Prospecting__Were_the_fastest[0].Copy_2;
		this.theTxt3=dynamicContent.TNT_dynamic_Feed__always_on_display_Prospecting__Were_the_fastest[0].Copy_3;
		this.theTxt4=dynamicContent.TNT_dynamic_Feed__always_on_display_Prospecting__Were_the_fastest[0].CTA;
	}
	this.frame_1 = function() {
		/* Fill this data per textfield */
		theMaxWidth = 310;
		theMaxHeight = 70;
		theMaxFontSize = 28;
		targetTextField = this.theTxt1_tf;
		
		/* Fill the textfield with copy */
		targetTextField.text=this.theTxt1;
		
		/* Start functionalities to copy */
		function setFontSize(textfieldName) {
			textfieldName.font=theMaxFontSize+"px 'Museo Sans 700'";
			textfieldName.lineHeight=theMaxFontSize+4;
			textfieldWidth=textfieldName.getBounds().width;
			textfieldHeight=textfieldName.getBounds().height;
		}
		setFontSize(targetTextField);
		while (textfieldHeight > theMaxHeight || textfieldWidth > theMaxWidth) {
			theMaxFontSize-=1;
		    setFontSize(targetTextField);
			/*
			// Vertically center text in buttons
			if(textfieldHeight <= theMaxHeight && textfieldWidth <= theMaxWidth) {
				targetTextField.y+=(theMaxHeight-textfieldHeight)/2;
			}
			*/
		}
		/* End functionalities to copy */
		
		this.theTxt1_tf.y=100;
		this.van_mc.gotoAndPlay("Brake");
	}
	this.frame_24 = function() {
		/* Fill this data per textfield */
		theMaxWidth = 310;
		theMaxHeight = 70;
		theMaxFontSize = 28;
		targetTextField = this.theTxt1_tf;
		
		/* Fill the textfield with copy */
		targetTextField.text=this.theTxt1;
		
		/* Start functionalities to copy */
		function setFontSize(textfieldName) {
			textfieldName.font=theMaxFontSize+"px 'Museo Sans 700'";
			textfieldName.lineHeight=theMaxFontSize+4;
			textfieldWidth=textfieldName.getBounds().width;
			textfieldHeight=textfieldName.getBounds().height;
		}
		setFontSize(targetTextField);
		while (textfieldHeight > theMaxHeight || textfieldWidth > theMaxWidth) {
			theMaxFontSize-=1;
		    setFontSize(targetTextField);
			/*
			// Vertically center text in buttons
			if(textfieldHeight <= theMaxHeight && textfieldWidth <= theMaxWidth) {
				targetTextField.y+=(theMaxHeight-textfieldHeight)/2;
			}
			*/
		}
		/* End functionalities to copy */
		createjs.Tween.get(this.theTxt1_tf, {override:true}).to({y:8}, 333, createjs.Ease.quadOut);
	}
	this.frame_89 = function() {
		/* Fill this data per textfield */
		theMaxHeight = 70;
		theMaxWidth = 310;
		theMaxFontSize = 28;
		targetTextField = this.theTxt1_tf;
		
		/* Fill the textfield with copy */
		targetTextField.text=this.theTxt2;
		
		/* Start functionalities to copy */
		function setFontSize(textfieldName) {
			textfieldName.font=theMaxFontSize+"px 'Museo Sans 700'";
			textfieldName.lineHeight=theMaxFontSize+4;
			textfieldWidth=textfieldName.getBounds().width;
			textfieldHeight=textfieldName.getBounds().height;
		}
		setFontSize(targetTextField);
		while (textfieldHeight > theMaxHeight || textfieldWidth > theMaxWidth) {
			theMaxFontSize-=1;
		    setFontSize(targetTextField);
			/*
			// Vertically center text in buttons
			if(textfieldHeight <= theMaxHeight && textfieldWidth <= theMaxWidth) {
				targetTextField.y+=(theMaxHeight-textfieldHeight)/2;
			}
			*/
		}
		/* End functionalities to copy */
	}
	this.frame_154 = function() {
		/* Fill this data per textfield */
		theMaxHeight = 70;
		theMaxWidth = 310;
		theMaxFontSize = 28;
		targetTextField = this.theTxt1_tf;
		
		/* Fill the textfield with copy */
		targetTextField.text=this.theTxt3;
		
		/* Start functionalities to copy */
		function setFontSize(textfieldName) {
			textfieldName.font=theMaxFontSize+"px 'Museo Sans 700'";
			textfieldName.lineHeight=theMaxFontSize+4;
			textfieldWidth=textfieldName.getBounds().width;
			textfieldHeight=textfieldName.getBounds().height;
		}
		setFontSize(targetTextField);
		while (textfieldHeight > theMaxHeight || textfieldWidth > theMaxWidth) {
			theMaxFontSize-=1;
		    setFontSize(targetTextField);
			/*
			// Vertically center text in buttons
			if(textfieldHeight <= theMaxHeight && textfieldWidth <= theMaxWidth) {
				targetTextField.y+=(theMaxHeight-textfieldHeight)/2;
			}
			*/
		}
		/* End functionalities to copy */
	}
	this.frame_172 = function() {
		this.van_mc.gotoAndPlay("Brake");
	}
	this.frame_239 = function() {
		this.cta_mc.cta_tf.text=this.theTxt4;
		this.cta_mc.scaleX = 0.1;
		this.cta_mc.scaleY = 0.1;
		createjs.Tween.get(this.cta_mc, {override:true}).to({scaleX:1,scaleY:1}, 500, createjs.Ease.backOut);
	}
	this.frame_273 = function() {
		this.cta_mc.scaleX = 1.1;
		this.cta_mc.scaleY = 1.1;
		createjs.Tween.get(this.cta_mc, {override:true}).to({scaleX:1,scaleY:1}, 1000, createjs.Ease.elasticOut);
	}
	this.frame_303 = function() {
		if (this.loopCounter==1) {
			this.stop();
		} else {
			this.loopCounter++;
		}
	}
	this.frame_325 = function() {
		createjs.Tween.get(this.theTxt1_tf, {override:true}).to({y:280}, 333, createjs.Ease.quadIn);
	}
	this.frame_343 = function() {
		this.gotoAndPlay("Loop");
	}

	// actions tween:
	this.timeline.addTween(cjs.Tween.get(this).call(this.frame_0).wait(1).call(this.frame_1).wait(23).call(this.frame_24).wait(65).call(this.frame_89).wait(65).call(this.frame_154).wait(18).call(this.frame_172).wait(67).call(this.frame_239).wait(34).call(this.frame_273).wait(30).call(this.frame_303).wait(22).call(this.frame_325).wait(18).call(this.frame_343).wait(1));

	// Logo
	this.instance = new lib.g_logo("synched",0);
	this.instance.parent = this;
	this.instance.setTransform(662.8,22.3,0.893,0.893,0,0,0,34.5,12.6);
	this.instance.alpha = 0;
	this.instance._off = true;

	this.timeline.addTween(cjs.Tween.get(this.instance).wait(9).to({_off:false},0).to({alpha:1},10).wait(314).to({startPosition:0},0).to({alpha:0},10).wait(1));

	// Btn
	this.cta_mc = new lib.mc_cta();
	this.cta_mc.name = "cta_mc";
	this.cta_mc.parent = this;
	this.cta_mc.setTransform(652.6,66.9,0.893,0.893,0,0,0,0.2,0.1);
	this.cta_mc._off = true;

	this.timeline.addTween(cjs.Tween.get(this.cta_mc).wait(239).to({_off:false},0).wait(88).to({y:136.9},11,cjs.Ease.get(-1)).wait(6));

	// Mask (mask)
	var mask = new cjs.Shape();
	mask._off = true;
	var mask_graphics_0 = new cjs.Graphics().p("EggpASCMAAAgkDMBBTAAAMAAAAkDg");
	var mask_graphics_79 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_80 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_81 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_82 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_83 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_84 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_85 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_86 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_87 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_88 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_89 = new cjs.Graphics().p("EgtSASCMAAAgkDMBWmAAAMAAAAkDg");
	var mask_graphics_90 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_91 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_92 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_93 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_94 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_95 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_96 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_97 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_98 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_99 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_144 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_145 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_146 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_147 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_148 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_149 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_150 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_151 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_152 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_153 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_154 = new cjs.Graphics().p("EgtSASCMAAAgkDMBWmAAAMAAAAkDg");
	var mask_graphics_155 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_156 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_157 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_158 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_159 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_160 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_161 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_162 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_163 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_164 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");
	var mask_graphics_206 = new cjs.Graphics().p("EgrSASCMAAAgkDMBWlAAAMAAAAkDg");

	this.timeline.addTween(cjs.Tween.get(mask).to({graphics:mask_graphics_0,x:159.3,y:105}).wait(79).to({graphics:mask_graphics_79,x:266.2,y:105}).wait(1).to({graphics:mask_graphics_80,x:260.6,y:105}).wait(1).to({graphics:mask_graphics_81,x:243.5,y:105}).wait(1).to({graphics:mask_graphics_82,x:215,y:105}).wait(1).to({graphics:mask_graphics_83,x:175.2,y:105}).wait(1).to({graphics:mask_graphics_84,x:124,y:105}).wait(1).to({graphics:mask_graphics_85,x:61.4,y:105}).wait(1).to({graphics:mask_graphics_86,x:-12.5,y:105}).wait(1).to({graphics:mask_graphics_87,x:-97.9,y:105}).wait(1).to({graphics:mask_graphics_88,x:-194.6,y:104.9}).wait(1).to({graphics:mask_graphics_89,x:-289.9,y:104.9}).wait(1).to({graphics:mask_graphics_90,x:-194.6,y:104.9}).wait(1).to({graphics:mask_graphics_91,x:-97.9,y:105}).wait(1).to({graphics:mask_graphics_92,x:-12.5,y:105}).wait(1).to({graphics:mask_graphics_93,x:61.4,y:105}).wait(1).to({graphics:mask_graphics_94,x:124,y:105}).wait(1).to({graphics:mask_graphics_95,x:175.2,y:105}).wait(1).to({graphics:mask_graphics_96,x:215,y:105}).wait(1).to({graphics:mask_graphics_97,x:243.5,y:105}).wait(1).to({graphics:mask_graphics_98,x:260.6,y:105}).wait(1).to({graphics:mask_graphics_99,x:266.2,y:105}).wait(45).to({graphics:mask_graphics_144,x:266.2,y:105}).wait(1).to({graphics:mask_graphics_145,x:260.6,y:105}).wait(1).to({graphics:mask_graphics_146,x:243.5,y:105}).wait(1).to({graphics:mask_graphics_147,x:215,y:105}).wait(1).to({graphics:mask_graphics_148,x:175.2,y:105}).wait(1).to({graphics:mask_graphics_149,x:124,y:105}).wait(1).to({graphics:mask_graphics_150,x:61.4,y:105}).wait(1).to({graphics:mask_graphics_151,x:-12.5,y:105}).wait(1).to({graphics:mask_graphics_152,x:-97.9,y:105}).wait(1).to({graphics:mask_graphics_153,x:-194.6,y:104.9}).wait(1).to({graphics:mask_graphics_154,x:-289.9,y:104.9}).wait(1).to({graphics:mask_graphics_155,x:-194.6,y:104.9}).wait(1).to({graphics:mask_graphics_156,x:-97.9,y:105}).wait(1).to({graphics:mask_graphics_157,x:-12.5,y:105}).wait(1).to({graphics:mask_graphics_158,x:61.4,y:105}).wait(1).to({graphics:mask_graphics_159,x:124,y:105}).wait(1).to({graphics:mask_graphics_160,x:175.2,y:105}).wait(1).to({graphics:mask_graphics_161,x:215,y:105}).wait(1).to({graphics:mask_graphics_162,x:243.5,y:105}).wait(1).to({graphics:mask_graphics_163,x:260.6,y:105}).wait(1).to({graphics:mask_graphics_164,x:266.2,y:105}).wait(42).to({graphics:mask_graphics_206,x:266.2,y:105}).wait(138));

	// Txt
	this.theTxt1_tf = new cjs.Text("Choose the speed you need", "28px 'Museo Sans 700'", "#FFFFFF");
	this.theTxt1_tf.name = "theTxt1_tf";
	this.theTxt1_tf.lineHeight = 36;
	this.theTxt1_tf.lineWidth = 317;
	this.theTxt1_tf.parent = this;
	this.theTxt1_tf.setTransform(24,13);

	var maskedShapeInstanceList = [this.theTxt1_tf];

	for(var shapedInstanceItr = 0; shapedInstanceItr < maskedShapeInstanceList.length; shapedInstanceItr++) {
		maskedShapeInstanceList[shapedInstanceItr].mask = mask;
	}

	this.timeline.addTween(cjs.Tween.get(this.theTxt1_tf).wait(344));

	// TxtPane
	this.instance_1 = new lib.g_txt_pane("synched",0);
	this.instance_1.parent = this;
	this.instance_1.setTransform(-131,326.3,1.867,1.717,0,0,0,150,54.1);
	this.instance_1._off = true;

	this.timeline.addTween(cjs.Tween.get(this.instance_1).wait(24).to({_off:false},0).to({x:239},11,cjs.Ease.get(1)).wait(288).to({startPosition:0},0).to({y:456.3},15,cjs.Ease.get(-1)).wait(6));

	// Van
	this.van_mc = new lib.mc_van();
	this.van_mc.name = "van_mc";
	this.van_mc.parent = this;
	this.van_mc.setTransform(743.2,-56.7,0.688,0.688);

	this.timeline.addTween(cjs.Tween.get(this.van_mc).to({regX:0.1,scaleX:0.69,x:528.9,y:50.3},24,cjs.Ease.get(1)).wait(75).to({regX:0,scaleX:0.69},0).wait(1).to({regX:-1.4,regY:-0.7,x:528.1,y:49.9},0).wait(1).to({x:528.8,y:50.3},0).wait(1).to({x:530.1,y:51},0).wait(1).to({x:531.9,y:52.1},0).wait(1).to({x:534.5,y:53.6},0).wait(1).to({x:537.9,y:55.5},0).wait(1).to({x:542.1,y:57.9},0).wait(1).to({x:547.2,y:60.8},0).wait(1).to({x:553,y:64.1},0).wait(1).to({x:559.2,y:67.7},0).wait(1).to({x:565.3,y:71.2},0).wait(1).to({x:571.1,y:74.5},0).wait(1).to({x:576.2,y:77.4},0).wait(1).to({x:580.4,y:79.8},0).wait(1).to({x:583.8,y:81.7},0).wait(1).to({x:586.4,y:83.2},0).wait(1).to({x:588.2,y:84.3},0).wait(1).to({x:589.5,y:85},0).wait(1).to({x:590.2,y:85.4},0).wait(1).to({regX:0,regY:0,x:591.4,y:86.1},0).wait(13).to({x:528.9,y:50.3},20,cjs.Ease.get(-0.5)).wait(156).to({regY:0.1,x:346.8,y:166.4},15,cjs.Ease.get(-1)).to({_off:true},1).wait(20));

	// VanCompetition
	this.instance_2 = new lib.g_van_grey("synched",0);
	this.instance_2.parent = this;
	this.instance_2.setTransform(280.5,185,0.344,0.344,0,0,0,159.8,112.8);
	this.instance_2._off = true;

	this.timeline.addTween(cjs.Tween.get(this.instance_2).wait(109).to({_off:false},0).to({regY:112.5,x:756.9,y:-38.2},30).to({_off:true},1).wait(204));

	// Building2
	this.instance_3 = new lib.g_building2("synched",0);
	this.instance_3.parent = this;
	this.instance_3.setTransform(295.4,146.1,0.67,0.67,0,0,0,137,123.3);
	this.instance_3._off = true;

	this.timeline.addTween(cjs.Tween.get(this.instance_3).wait(179).to({_off:false},0).to({regY:123.2,x:466.1,y:65.8},20,cjs.Ease.get(1)).wait(109).to({startPosition:0},0).to({regX:137.1,x:676.1,y:-69.2},15).to({_off:true},1).wait(20));

	// Buildings
	this.instance_4 = new lib.g_buildings("synched",0);
	this.instance_4.parent = this;
	this.instance_4.setTransform(-103.7,316.5,0.893,0.893,0,0,0,499.4,295.7);
	this.instance_4._off = true;

	this.timeline.addTween(cjs.Tween.get(this.instance_4).wait(59).to({_off:false},0).to({regX:499.5,regY:295.6,x:1065.9,y:-272.8},70,cjs.Ease.get(-1)).wait(1).to({regX:499.4,regY:295.7,x:-195.5,y:377.9},0).to({regY:295.6,x:1039.1,y:-272.8},54).to({_off:true},1).wait(159));

	// Building1
	this.instance_5 = new lib.g_building1("synched",0);
	this.instance_5.parent = this;
	this.instance_5.setTransform(208.2,157.7,0.67,0.67,0,0,0,141.2,110.7);

	this.instance_6 = new lib.g_building4("synched",0);
	this.instance_6.parent = this;
	this.instance_6.setTransform(327.5,101.3,0.446,0.446,0,0,0,230.3,251.7);
	this.instance_6._off = true;

	this.timeline.addTween(cjs.Tween.get(this.instance_5).to({regY:110.6,x:438.9,y:27.3},24,cjs.Ease.get(1)).wait(35).to({startPosition:0},0).to({x:1598.5,y:-552},70,cjs.Ease.get(-1)).to({_off:true},1).wait(214));
	this.timeline.addTween(cjs.Tween.get(this.instance_6).wait(130).to({_off:false},0).to({regX:230.4,regY:251.6,x:1562.1,y:-549.4},54).to({_off:true},1).wait(159));

}).prototype = p = new cjs.MovieClip();
p.nominalBounds = new cjs.Rectangle(386,-50.4,776.2,307.6);
// library properties:
lib.properties = {
	id: 'F42B515E91D245639439736F5A707FAA',
	width: 728,
	height: 90,
	fps: 30,
	color: "#FFFFFF",
	opacity: 1.00,
	manifest: [],
	preloads: []
};



// bootstrap callback support:

(lib.Stage = function(canvas) {
	createjs.Stage.call(this, canvas);
}).prototype = p = new createjs.Stage();

p.setAutoPlay = function(autoPlay) {
	this.tickEnabled = autoPlay;
}
p.play = function() { this.tickEnabled = true; this.getChildAt(0).gotoAndPlay(this.getTimelinePosition()) }
p.stop = function(ms) { if(ms) this.seek(ms); this.tickEnabled = false; }
p.seek = function(ms) { this.tickEnabled = true; this.getChildAt(0).gotoAndStop(lib.properties.fps * ms / 1000); }
p.getDuration = function() { return this.getChildAt(0).totalFrames / lib.properties.fps * 1000; }

p.getTimelinePosition = function() { return this.getChildAt(0).currentFrame / lib.properties.fps * 1000; }

an.bootcompsLoaded = an.bootcompsLoaded || [];
if(!an.bootstrapListeners) {
	an.bootstrapListeners=[];
}

an.bootstrapCallback=function(fnCallback) {
	an.bootstrapListeners.push(fnCallback);
	if(an.bootcompsLoaded.length > 0) {
		for(var i=0; i<an.bootcompsLoaded.length; ++i) {
			fnCallback(an.bootcompsLoaded[i]);
		}
	}
};

an.compositions = an.compositions || {};
an.compositions['F42B515E91D245639439736F5A707FAA'] = {
	getStage: function() { return exportRoot.getStage(); },
	getLibrary: function() { return lib; },
	getSpriteSheet: function() { return ss; },
	getImages: function() { return img; }
};

an.compositionLoaded = function(id) {
	an.bootcompsLoaded.push(id);
	for(var j=0; j<an.bootstrapListeners.length; j++) {
		an.bootstrapListeners[j](id);
	}
}

an.getComposition = function(id) {
	return an.compositions[id];
}



})(createjs = createjs||{}, AdobeAn = AdobeAn||{});
var createjs, AdobeAn;