     A H  �        R��         ��         :   Estructural  � �          a�  �� A s �� *� M� U� ]y eI m t� �A �i �a 	Y ,� <! C� K� S� �q �� �! �I �� � 6! ]1 t� ��  �     e�  �� ) w �� .� Q� Y� aa i1 q x� �) �Q �I A 0i @	 G� O� Wy �Y �� �	 �1 �q � :	 a x� ��        ~� �� �9 �a �� � 29 YI p� �� ʑ �  �       �  �     �        	  Y  #)  *�  2�  :�  Bi  J9  R	  Y�       	  A  '  .�  6�  >�  FQ  N!  U�  ]�          e�     v  ��          A     :   init  A  �     p   0  Y      q          �     :   z  '  �     p   1  #)      q          �     :   lsb  .�  �     p   2  *�      q          �     :   clk  6�  �     p   3  2�      q          �     :   reset_n  >�  �     p   4  :�      q          �     :   sh  FQ  �     p   5  Bi     q          �     :   done_n  N!  �     p   6  J9     q          �     :   	restart_n  U�  �     p   7  R	     q          �     :   add  ]�  �     p   8  Y�     q          �     :   
CONTROLLER  e�  �        .  a�  �  �          qI  ��  �q  ��         u1  ��  �Y  ��          ��     v l�          u1     :   nbits  u1  iy     !   =  qI      ma      iy     S  $     qI  }  ��     @     y     ' Q4     y  ��      ��     @      ��     v  �[     ��      ��     :   num  ��  iy     p   ?  ��      ��          iy     :   revert  �Y  iy     p   @  �q      q          iy     S  $     qI  �)  �     @     �A     ' Q4     �A  ��      ��     @      �     v  �[     �      ��     :   num_c2  ��  iy     p   A  ��     ��          iy     :   SINGLE_ADAPT_C2  ��  �        <  ��  iy  �          �Q  ީ  �y  �I q         �9  �  �a  �1 Y         )     :   nbits  �9  �i     !   F  �Q      ma      �i     S  $     �Q  �	  ��     @     �!     ' Q4     �!  ��      ��     @      ��     v  �[     ��      �     :   	factor_in  �  �i     p   H  ީ      ��          �i     :   load  �a  �i     p   I  �y      q          �i     :   clk  �1  �i     p   J  �I      q          �i     @     �     S ��     �  �Q  ��     S  $     � � �     @     ��     ' Q4     �� 	�     �     @     �     v  �[    �     Y     :   
factor_out Y  �i     p   K q    �          �i     :   LSR )  �        E A  �i  �         $� @Q H! O� kI        (� D9 L	 S� o1         w     :   nbits (� !     !   Q $�      ma     !     S  $    $� 0� 4�     @    ,�     ' Q4    ,� 8�     <i     @     4�     v  �[    4�     D9     :   	factor_in D9 !     p   T @Q     <i         !     :   load L	 !     p   U H!      q         !     :   clk S� !     p   V O�      q         !     S  $    $� [� _�     @    W�     ' Q4    W� cy     ga     @     _�     v  �[    _�     o1     :   
factor_out o1 !     p   W kI    ga         !     :   RSR w  �        O s !  �         ~� �) �� ��        �� � �� ��         ��     :   nbits �� z�     !   ] ~�      ma     z�     S  $    ~� �� �q     @    ��     ' Q4    �� �Y     �A     @     �q     v  �[    �q     �     :   num � z�     p   ` �)     �A         z�     :   z �� z�     p   a ��     q         z�     :   lsb �� z�     p   b ��     q         z�     :   
COMPARATOR ��  �        [ �� z�  �         �Q �y �I � �� �� "�        �9 �a �1 � �� � &�         .�     :   nbits �9 �i     !   h �Q      ma     �i     @    �	     S ��    �! �Q ��     S  $    �	 �� ��     @    ��     ' Q4    �� ة     ܑ     @     ��     v  �[    ��     �a     :   sumando �a �i     p   k �y     ܑ         �i     :   reset_n �1 �i     p   l �I      q         �i     :   add � �i     p   m �      q         �i     :   clk �� �i     p   n ��      q         �i     :   oe_n � �i     p   o ��      q         �i     @    q     S ��    � �Q Y     S  $    q A )     @    Y     ' Q4    Y      �     @     )     v  �[    )     &�     :   suma &� �i     p   p "�    �         �i     :   ACC .�  �        f *� �i  �         6i >9 F	        :Q B! I�         Q�     :   d :Q 2�     p   v 6i      q         2�     :   clk B! 2�     p   w >9      q         2�     :   q I� 2�     p   x F	     q         2�     :   latch_D Q�  �        t M� 2�  �     :   z_i Y�  �     p   } U�     q  [      �     :   lsb_i aa  �     p   ~ ]y     q  �      �     :   sh_i i1  �     p    eI     q  �      �     :   	restart_i q  �     p   � m     q  �      �     :   add_i x�  �     p   � t�     q  �      �     S  $     #* �� ��     @    |�     ' Q4    |� �q     �Y     @     ��     v  �[    ��     �)     :   a_c2i �)  �     p   � �A    �Y ��      �     
    ��  � ��      �Y    � �)     S  $     #* �� ��     @    ��     ' Q4    �� ��     ��     @     ��     v  �[    ��     �Q     :   b_c2i �Q  �     p   � �i    �� �!      �     
    ��  � �!      ��    �9 �Q     @    ��     S ��    �	  #* ��     S  $    �� �� ҩ     @    ��     ' Q4    �� ֑     �y     @     ҩ     v  �[    ҩ     �I     :   suma_i �I  �     p   � �a    �y �      �     
    ҩ  � �      �y    �1 �I     @    ��     S ��    �  #* ��     S  $    �� �� ��     @    ��     ' Q4    �� �     q     @     ��     v  �[    ��     A     :   lsr_out A  �     p   � 	Y    q       �     
    ��  �       q    ) A     S  $     #* �  �     @    �     ' Q4    � $�     (�     @      �     v  �[     �     0i     :   rsr_out 0i  �     p   � ,�    (� 89      �     
     �  � 89      (�    4Q 0i     :   revert_i @	  �     p   � <!     q  �      �     :   done_ni G�  �     p   � C�     q  �      �     :   oe_ni O�  �     p   � K�     q  �      �     :   latch_qi Wy  �     p   � S�     q  �      �     \     Y  .� ~�     \     #) U� ~�     \     *� ]y ~�     \     2�  >� ~�     \     :�  6� ~�     \     Bi eI ~�     \     J9 C� ~�     \     R	 m ~�     \     Y� t� ~�        � �q  a�   	 [a _I c1 g k n� r� v� z�      �     :   CPU �Y  �     E   � �q ~�  �     7     qI  #* ��     \     ��  Y� ��     \     �q  [ ��     \     �� �A ��        � ��  ��    �A �) � ��      �     :   	ADAPT_LSR ��  �     E   � �� ��  �     7     qI  #* �9     \     ��  a� �9     \     �q  [ �9     \     �� �i �9        � �!  ��    �� �� �i �Q      �     :   	ADAPT_RSR �	  �     E   � �! �9  �     @    ��     S ��    ��  #* ��     7     qI �� �a     \     �� �a �a     \     �q S� �a     \     ��  �� �a        � �I  ��    �� ̩ Б �y      �     :   ADAPT_RESULT �1  �     E   � �I �a  �     7     �Q  #* ��     \     ީ �A ��     \     �y m ��     \     �I eI ��     \    q 	Y ��        � �� A    � � �� �� �      �     :   MULTIPLICANT_LSR �q  �     E   � �� ��  �     7    $�  #* �     \    @Q �i �     \    H! m �     \    O� eI �     \    kI ,� �        � � s    Y A )  �      �     :   MULTIPLICATOR_RSR �  �     E   � � �  �     7    ~�  #* 29     \    �) ,� 29     \    �� U� 29     \    �� ]y 29        � 6! ��    "� &� *i .Q      �     :   COMP :	  �     E   � 6! 29  �     7    �Q  #* YI     \    �y 	Y YI     \    �I m YI     \    � t� YI     \    ��  >� YI     \    �� K� YI     \    "� �a YI        � ]1 *�    =� A� E� I� M� Qy Ua      �     :   
ACUMULATOR a  �     E   � ]1 YI  �     \    6i <! p�     \    >9  >� p�     \    F	 S� p�        � t� M�    e h� l�      �     :   SINC x�  �     E   � t� p�  �     �  C         ��     S  $     #* �A �)     @    �Y     >     Y� �Y ��     S  $     #* �� ��     @    �     >     a� � ��     S [�    �9 �! ��     S ��    ��  C ��     �    �� |q ��     J    �� �Q ��     �  [         �Q     �     �< �i ��     Y    L �)         Y    S� ��         v  ��         ��     U     ��     FS  FS  �� �	  �     T   = ��  �        �     �� <!              �     � C�         ʑ        �     Ʃ  iz              �     S  ޫ    �I �1 �a     � �y         �     Y     � C�         Y     ��  .�            �     �a K�              �     %     �  �  �Z     � ��     �   =C:/Users/Guss/Desktop/TRABAJO SED/MULTIPLICADOR_Nbits/TOP.vhd �  �                top   estructural   work      top   estructural   work      top       work      std_logic_1164       IEEE      standard       std