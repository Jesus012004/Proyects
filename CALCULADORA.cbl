       IDENTIFICATION DIVISION.
       PROGRAM-ID. CALCULADORA.
       AUTHOR JESUS DANIEL PADRIN MARIN.
       DATE-WRITTEN "24/05/2024"
       DATE-MODIFIED "24/05/2024"
       DATE-COMPILED "24/05/2024"

       DATA DIVISION.
       FILE SECTION.
       WORKING-STORAGE SECTION.
       77 NUMBER1 PICTURE S9(3)V999 VALUE ZERO.
       77 NUMBER2 PICTURE S9(3)V999 VALUE ZERO.
       77 RESULT PICTURE S9(6)V999 VALUE ZERO.
       77 OPTION PICTURE 9 VALUE ZERO.
       PROCEDURE DIVISION.
       MAIN-PROCEDURE.
             DISPLAY "OPTIONS"
             DISPLAY "ADD"
             DISPLAY "SUBTRACT"
             DISPLAY "MULTIPLY"
             DISPLAY "DIVISION"
             ACCEPT OPTION.
             EVALUATE OPTION
              WHEN 1
               DISPLAY "ENTER ONE NUMBER WHIT LEES TO ONE HUNDRED"
               ACCEPT NUMBER1
               DISPLAY "ENTER ANOTHER NUMBER WHIT LEES TO ONE HUNDRED"
               ACCEPT NUMBER2
               ADD NUMBER1 TO NUMBER2 GIVING RESULT
                ON SIZE ERROR DISPLAY "OVELOADED INPUT BUFER ERROR"
                NOT ON SIZE ERROR DISPLAY "THE RESULT IS" RESULT
                END-ADD

               WHEN 2
               DISPLAY "ENTER ONE NUMBER WHIT LEES TO ONE HUNDRED"
               ACCEPT NUMBER1
               DISPLAY "ENTER ANOTHER NUMBER WHIT LEES TO ONE HUNDRED"
               ACCEPT NUMBER2
               COMPUTE RESULT = NUMBER1 - NUMBER2
                ON SIZE ERROR DISPLAY "OVELOADED INPUT BUFER ERROR"
                NOT ON SIZE ERROR DISPLAY "THE RESULT IS" RESULT
                END-COMPUTE

               WHEN 3
               DISPLAY "ENTER ONE NUMBER WHIT LEES TO ONE HUNDRED"
               ACCEPT NUMBER1
               DISPLAY "ENTER ANOTHER NUMBER WHIT LEES TO ONE HUNDRED"
               ACCEPT NUMBER2
               MULTIPLY NUMBER1 BY NUMBER2 GIVING RESULT
                ON SIZE ERROR DISPLAY "OVELOADED INPUT BUFER ERROR"
                NOT ON SIZE ERROR DISPLAY "THE RESULT IS" RESULT WITH NO
                ADVANCING
                END-MULTIPLY

               WHEN 4
               DISPLAY "ENTER ONE NUMBER WHIT LEES TO ONE HUNDRED"
               ACCEPT NUMBER1
               DISPLAY "ENTER ANOTHER NUMBER WHIT LEES TO ONE HUNDRED"
               ACCEPT NUMBER2
               DIVIDE NUMBER1 BY NUMBER2 GIVING RESULT
                ON SIZE ERROR DISPLAY "OVELOADED INPUT BUFER ERROR"
                NOT ON SIZE ERROR DISPLAY "THE RESULT IS" RESULT
                END-DIVIDE

                WHEN OTHER
                 DISPLAY "ERROR: UKWNOW VALUE IN OPTION INPUT BUFER"
               END-EVALUATE.
             STOP RUN.
       END PROGRAM CALCULADORA.
