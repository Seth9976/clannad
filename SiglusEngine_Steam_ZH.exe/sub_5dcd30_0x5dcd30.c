// 函数: sub_5dcd30
// 地址: 0x5dcd30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* ebx = arg1
int32_t var_1c = 0
void* var_c = ebx
int32_t* esi = arg2
int32_t var_2c = 0xffffffff
int32_t* var_10 = esi
void* eax_2 = sub_5dd5c0(ebx)
void* const var_14

if (eax_2 != 0 && *(eax_2 + 0x140) != 0 && *(eax_2 + 0x141) == 0)
    int32_t* ebx_1 = *(ebx + 0x1b8)
    void* const eax_3 = *ebx_1
    var_14 = eax_3
    
    if (eax_3 != ebx_1)
        int32_t* edi_1 = data_bac4e8
        int32_t esi_1 = *edi_1
        
        do
            if (esi_1 != 0xffffffff && esi_1 == *(eax_3 + 0x14))
                var_2c = *(eax_3 + 0x58)
                
                if (esi_1 == 0xffffffff)
                    var_1c = 0
                else
                    int32_t eax_4 = *(eax_3 + 0x14)
                    
                    if (esi_1 != eax_4)
                        var_1c = 0
                    else if (edi_1[3] == 1)
                        var_1c = 1
                    else if (esi_1 != eax_4)
                        var_1c = 0
                    else
                        var_1c = 2
                        
                        if (edi_1[3] != 2)
                            var_1c = 0
                
                break
            
            sub_563d80(&var_14)
            eax_3 = var_14
        while (eax_3 != ebx_1)
        
        esi = var_10
    
    ebx = var_c

int32_t var_18 = 0
int32_t eax_8 = (*(ebx + 0x1b0) - *(ebx + 0x1ac)) s/ 0x3b4
int32_t var_3c

if (eax_8 s> 0)
    int32_t var_20_1 = 0
    int32_t eax_41
    
    do
        void* ebx_3 = data_bac510
        int24_t edi_2 = arg4
        int24_t esi_2 = arg5
        bool cond:0_1 = *(ebx_3 + 0x10bd8) != 1
        int24_t ecx_5 = arg6
        int32_t var_24_1 = arg9
        var_14 = arg3
        
        if (not(cond:0_1))
            ebx_3 = data_bac510
            var_24_1 -= *(var_20_1 + *(var_c + 0x1ac) + 8)
        
        void** edx_6 = *(var_c + 0x1b8)
        void** var_28_1 = edx_6
        void** eax_13 = edx_6[1]
        
        if (*(eax_13 + 0xd) == 0)
            do
                if (eax_13[4] s>= var_18)
                    edx_6 = eax_13
                    eax_13 = *eax_13
                else
                    eax_13 = eax_13[2]
            while (*(eax_13 + 0xd) == 0)
            
            ebx_3 = data_bac510
        
        void*** eax_15
        void** var_38
        
        if (edx_6 == var_28_1)
            var_38 = var_28_1
            eax_15 = &var_38
        else if (var_18 s< edx_6[4])
            var_38 = var_28_1
            eax_15 = &var_38
        else
            void** var_34 = edx_6
            eax_15 = &var_34
        void** eax_17 = *eax_15
        
        if (eax_17 != *(var_c + 0x1b8))
            if (var_2c == 0xffffffff || eax_17[0x16] != var_2c)
                int32_t eax_25 = eax_17[0x17]
                
                if (eax_25 s>= 0 && eax_25 s< *(ebx_3 + 0x1e778))
                    int32_t eax_27 = *(ebx_3 + eax_25 * 0x14 + 0x1d378)
                    
                    if (eax_27 s>= 0 && eax_27 s< *(ebx_3 + 0x126fc))
                        int32_t* edx_10 = data_bac4c0
                        var_14 = 0xff
                        int32_t ecx_9 = ((edx_10[1] - *edx_10) s>> 2) - 1
                        
                        if (eax_27 s< 0)
                            eax_27 = 0
                        else if (eax_27 s> ecx_9)
                            eax_27 = ecx_9
                        
                        int32_t ecx_10 = *edx_10
                        int32_t esi_3 = *(ebx_3 + 0xa2ebb8)
                        edi_2 = (*(ecx_10 + (eax_27 << 2))).3
                        int32_t eax_31 = ((edx_10[1] - ecx_10) s>> 2) - 1
                        
                        if (esi_3 s< 0)
                            esi_3 = 0
                        else if (esi_3 s> eax_31)
                            esi_3 = eax_31
                        
                        esi_2 = (*(ecx_10 + (esi_3 << 2))).3
                        int32_t ecx_11 = *(ebx_3 + 0xa2ebbc)
                        int32_t eax_35 = ((edx_10[1] - *edx_10) s>> 2) - 1
                        
                        if (ecx_11 s< 0)
                            ecx_11 = 0
                        else if (ecx_11 s> eax_35)
                            ecx_11 = eax_35
                        
                        ecx_5 = (*(*edx_10 + (ecx_11 << 2))).3
            else
                int32_t edx_9 = eax_17[0x17]
                
                if (edx_9 s>= 0 && edx_9 s< *(ebx_3 + 0x1e778))
                    int32_t eax_21 = *(ebx_3 + ((edx_9 * 5 + var_1c) << 2) + 0x1d378)
                    
                    if (eax_21 s>= 0 && eax_21 s< *(ebx_3 + 0x126fc))
                        var_14 = 0xff
                        void var_54
                        edi_2 = (*sub_5b26b0(&var_54, eax_21)).3
                        void var_58
                        esi_2 = (*sub_5b26b0(&var_58, *(ebx_3 + 0xa2ebb8))).3
                        ecx_5 = (*sub_5b26b0(&var_3c, *(ebx_3 + 0xa2ebbc))).3
        
        ebx = var_c
        esi = var_10
        
        if (sub_5db450(*(ebx + 0x1ac) + var_20_1, esi, 0, var_14, edi_2, esi_2, ecx_5, arg7, arg8, 
                var_24_1, arg10) == 0)
            sub_745f2b(eax_1 ^ &__saved_ebp)
            return 0
        
        var_20_1 += 0x3b4
        eax_41 = var_18 + 1
        var_18 = eax_41
    while (eax_41 s< eax_8)

int32_t* ecx_13 = *(ebx + 0x1b8)
int32_t* i = *ecx_13

if (i != ecx_13)
    do
        void* edx_12 = i[4] * 0x3b4 + *(ebx + 0x1ac)
        int32_t esi_4 = int.d(fconvert.t(esi[6]))
        int32_t edi_5 = int.d(fconvert.t(esi[5])) + *(edx_12 + 0x18) + arg9
        var_3c = *(edx_12 + 0x1c)
        int32_t var_40_1 = *(edx_12 + 0x18)
        int32_t edx_13 = *(edx_12 + 8)
        int32_t esi_6 = esi_4 + *(edx_12 + 0x1c) + arg10
        int32_t var_4c_1 = esi_6
        i[0x11] = 0
        i[0x12] = 0
        int32_t var_48_1 = edx_13 + edi_5
        int32_t var_44_1 = edx_13 + esi_6
        *(i + 0x18) = edi_5.o
        
        if (*(i + 0xd) == 0)
            int32_t* i_1 = i[2]
            
            if (*(i_1 + 0xd) != 0)
                int32_t* i_3 = i[1]
                
                if (*(i_3 + 0xd) == 0)
                    while (i == i_3[2])
                        i = i_3
                        i_3 = i_3[1]
                        
                        if (*(i_3 + 0xd) != 0)
                            break
                
                i = i_3
            else
                i = i_1
                int32_t* i_2 = *i
                
                while (*(i_2 + 0xd) == 0)
                    i = i_2
                    i_2 = *i
        
        esi = var_10
    while (i != *(ebx + 0x1b8))

i.b = 1
sub_745f2b(eax_1 ^ &__saved_ebp)
return i
