// 函数: sub_743250
// 地址: 0x743250
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_c = arg5
int32_t* var_18 = arg6
int32_t* var_14 = arg5
int32_t* var_8 = arg6
int32_t* ecx_1 = arg8
int32_t var_30 = 0xffffffff
int32_t var_2c = 0xffffffff
int32_t* arg_4
int32_t* esi = arg_4
int32_t i = arg9
int32_t* ebx = esi[0x72]
int32_t arg_20
int32_t* arg_28

if (arg8 != 0 && arg9 != 0)
    do
        i -= 1
        
        if (*ecx_1 == arg_28)
            int32_t* eax_4 = arg5
            int32_t* edx_3 = arg6
            
            while (arg_28 != ebx)
                arg_28 = ebx
                eax_4, edx_3 = sub_744070(esi, eax_4, edx_3, arg8, arg9, &arg_28, &arg_20)
            
            esi[0xd] = arg10 + 1
            int32_t eax_7 = esi[0xe]
            
            if (eax_7 != 0)
                _free(eax_7)
            
            int32_t eax_8 = esi[0x10]
            
            if (eax_8 != 0)
                _free(eax_8)
            
            int32_t eax_9 = esi[0xf]
            
            if (eax_9 != 0)
                _free(eax_9)
            
            int32_t edi_2 = esi[0xd]
            int32_t eax_11 = _malloc((edi_2 << 3) + 8)
            int32_t var_88_2 = esi[0x12]
            esi[0xe] = eax_11
            esi[0x12] = _realloc(var_88_2, edi_2 << 5)
            int32_t eax_15 = _realloc(esi[0x13], esi[0xd] << 4)
            int32_t edi_4 = esi[0xd]
            esi[0x13] = eax_15
            esi[0x10] = _malloc(edi_4 << 2)
            esi[0xf] = _malloc(edi_4 << 3)
            int32_t* edi_6 = arg7
            esi[0x11] = _malloc(edi_4 << 4)
            int32_t eax_21 = esi[0xe]
            *(eax_21 + (arg10 << 3) + 8) = arg5
            *(eax_21 + (arg10 << 3) + 0xc) = arg6
            int32_t ecx_7 = esi[0xe]
            *(ecx_7 + (arg10 << 3)) = arg1
            *(ecx_7 + (arg10 << 3) + 4) = arg2
            int32_t ecx_8 = arg_20
            
            if (edi_6 s<= 0 && (edi_6 s< 0 || ecx_8 u< 0))
                arg5.q = 0
                edi_6 = arg6
                ecx_8 = 0
            
            int32_t eax_24 = esi[0x11]
            int32_t edx_5 = arg10 * 2
            *(eax_24 + (edx_5 << 3) + 8) = ecx_8
            *(eax_24 + (edx_5 << 3) + 0xc) = edi_6
            return 0
        
        ecx_1 = &ecx_1[1]
    while (i != 0)

int32_t* edi_1 = arg4
int32_t var_24 = 0
int32_t var_20 = 0
int32_t* var_10 = edi_1
int32_t result

if (edi_1 s<= arg6)
    int32_t* edx_2 = arg3
    arg_4 = edx_2
    
    if (edi_1 s< arg6 || edx_2 u< arg5)
        int32_t* eax_1 = var_c
        
        while (true)
            int32_t eax_3 = sbb.d(var_18, edi_1, eax_1 u< edx_2)
            int32_t* var_1c_1
            int32_t* ebx_2
            
            if (eax_3 s> 0 || (eax_3 s>= 0 && eax_1 - edx_2 u>= 0x10000))
                uint32_t eax_26
                int32_t* edx_6
                eax_26, edx_6 =
                    __alldiv(var_c + edx_2, adc.d(var_18, edi_1, var_c + edx_2 u< var_c), 2, 0)
                ebx_2 = eax_26
                arg4 = eax_26
                edi_1 = edx_6
                var_1c_1 = edx_6
            else
                ebx_2 = edx_2
                var_1c_1 = edi_1
                arg4 = ebx_2
            
            int32_t ecx_11 = *esi
            int32_t eax_30
            
            if (ecx_11 == 0)
                eax_30 = 0xffffff7f
            else if (esi[2] != ebx_2 || esi[3] != edi_1)
                int32_t eax_27 = esi[0xb1]
                int32_t eax_28
                
                if (eax_27 != 0)
                    eax_28 = eax_27(ecx_11, ebx_2, edi_1, 0)
                
                if (eax_27 == 0 || eax_28 == 0xffffffff)
                    eax_30 = 0xffffff80
                else
                    esi[2] = ebx_2
                    esi[3] = edi_1
                    sub_6e5120(&esi[6])
                    eax_30 = 0
            else
                eax_30 = 0
            
            int32_t edx_7
            edx_7:result = sx.q(eax_30)
            
            if ((result | edx_7) != 0)
                return result
            
            void var_40
            int32_t* eax_31
            int32_t* edx_8
            eax_31, edx_8 = sub_743dc0(esi, &var_40, 0xffffffff, 0xffffffff)
            
            if (eax_31 == 0xffffff80 && edx_8 == 0xffffffff)
                return 0xffffff80
            
            uint32_t eax_32
            int32_t ecx_14
            int32_t* edx_9
            
            if (edx_8 s>= 0 && (edx_8 s> 0 || eax_31 u>= 0))
                eax_32 = sub_6e47d0(&var_40)
                edx_9 = arg8
                ecx_14 = arg9
            
            int32_t* ecx_15
            
            if (edx_8 s< 0 || (edx_8 s<= 0 && eax_31 u< 0) || edx_9 == 0 || ecx_14 == 0)
            label_7434f4:
                eax_1 = arg4
                ecx_15 = var_1c_1
                var_c = eax_1
                var_18 = ecx_15
                
                if (edx_8 s>= 0 && (edx_8 s> 0 || eax_31 u>= 0))
                    var_14 = eax_31
                    var_8 = edx_8
                
                edx_2 = arg_4
                edi_1 = var_10
            else
                while (true)
                    ecx_14 -= 1
                    
                    if (*edx_9 == eax_32)
                        edx_2 = esi[2]
                        edi_1 = esi[3]
                        eax_1 = var_c
                        ecx_15 = var_18
                        arg_4 = edx_2
                        var_10 = edi_1
                        break
                    
                    edx_9 = &edx_9[1]
                    
                    if (ecx_14 == 0)
                        goto label_7434f4
            
            if (edi_1 s>= ecx_15)
                if (edi_1 s> ecx_15)
                    break
                
                if (edx_2 u>= eax_1)
                    break
        
        ebx = ebx

int32_t* edx_10 = var_8
int32_t* eax_33 = var_14

if (ebx + 1 != ebx)
    do
        arg_4 = ebx
        eax_33, edx_10 = sub_744070(esi, eax_33, edx_10, arg8, arg9, &arg_4, &var_30)
    while (arg_4 != ebx)

int32_t edx_11
edx_11:result = sx.q(sub_744870(esi, var_14, var_8))
int32_t* ecx_18 = result | edx_11

if (ecx_18 == 0)
    int128_t var_70
    int128_t var_50
    int32_t edx_12
    edx_12:result = sx.q(sub_743ac0(esi, &var_70, &var_50, &var_24, &var_20, ecx_18))
    
    if ((result | edx_12) == 0)
        int32_t* eax_36 = esi[0x72]
        int32_t eax_37 = esi[2]
        arg_4 = esi[3]
        int32_t* eax_39
        int32_t edx_13
        eax_39, edx_13 = sub_7442b0(esi, &var_70)
        int32_t edi_9 = var_24
        int32_t edx_14
        edx_14:result = sx.q(sub_743250(esi, var_14, var_8, esi[2], esi[3], arg5, arg6, arg_20, 
            arg7, arg_28, edi_9, var_20, arg10 + 1))
        
        if ((result | edx_14) == 0)
            if (edi_9 != 0)
                _free(edi_9)
            
            int32_t eax_41 = esi[0xe]
            *(eax_41 + (arg10 << 3) + 8) = var_14
            *(eax_41 + (arg10 << 3) + 0xc) = var_8
            *(esi[0x10] + (arg10 << 2) + 4) = eax_36
            int32_t eax_43 = esi[0xf]
            *(eax_43 + (arg10 << 3) + 8) = eax_37
            *(eax_43 + (arg10 << 3) + 0xc) = arg_4
            int32_t ecx_29 = var_30
            int128_t* eax_46 = ((arg10 + 1) << 5) + esi[0x12]
            int32_t ebx_7 = arg10 << 4
            *eax_46 = var_70
            int128_t var_60
            eax_46[1] = var_60
            *(esi[0x13] + ebx_7 + 0x10) = var_50
            int32_t eax_48 = esi[0x11]
            *(ebx_7 + eax_48 + 8) = ecx_29
            *(ebx_7 + eax_48 + 0xc) = var_2c
            int32_t eax_49 = esi[0x11]
            *(ebx_7 + eax_49 + 0x10) = eax_39
            *(ebx_7 + eax_49 + 0x14) = edx_13
            int32_t eax_50 = esi[0x11]
            int32_t temp4_1 = *(ebx_7 + eax_50 + 0x18)
            *(ebx_7 + eax_50 + 0x18) -= eax_39
            *(ebx_7 + eax_50 + 0x1c) = sbb.d(*(ebx_7 + eax_50 + 0x1c), edx_13, temp4_1 u< eax_39)
            int32_t eax_51 = esi[0x11]
            int32_t temp5_1 = *(ebx_7 + eax_51 + 0x1c)
            
            if (temp5_1 s<= 0 && (temp5_1 s< 0 || *(ebx_7 + eax_51 + 0x18) u< 0))
                *(ebx_7 + eax_51 + 0x18) = 0
                *(ebx_7 + eax_51 + 0x1c) = 0
            
            return 0

return result
