
TRY

   USE (m.goapp.cCommonFolder + '00gcw\options') IN 0 ALIAS gcwopt
   SELECT gcwopt
   GO TOP
   TRY
      SELECT options
      GO TOP
      REPL cemailaddress WITH gcwopt.cemailaddress, ;
         cemailserver  WITH gcwopt.cemailserver, ;
         cemailuser    WITH gcwopt.cemailuser, ;
         cemailpass    WITH gcwopt.cemailpass, ;
         nsmtpport     WITH gcwopt.nsmtpport, ;
         lusessl       WITH gcwopt.lusessl
      lnchanged = lnchanged + 1

      swclose('options')
      swclose('gcwopt')
   CATCH
   ENDTRY

CATCH TO loErr
   MESSAGEBOX('Unable to copy the email settings from 00GCW' + CHR(13) + 'Error: ' + loErr.MESSAGE + CHR(13) + ;
      'Line:  ' + TRANSFORM(loErr.LINENO),0,'Copy Email Settings')
ENDTRY


