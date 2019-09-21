SerialPort.listDevices
SerialPort.closeAll

(
p = SerialPort(
    "/dev/cu.usbmodem14101",    //edit to match your port
    baudrate: 9600,
    crtscts: true);
)

(
r= Routine({
    99999.do{
		~valIno = p.read;
		~valIno.postln
    };
}).play;
)

Ndef(\arduinoListener, {|sineFreq| SinOsc.ar(sineFreq, mul:0.1)}).play

Ndef(\arduinoListener).set(\sineFreq, ~valIno.linlin(0, 255, 200, 800))

Ndef(\arduinoListener).clear(3)

r.stop
p.close;