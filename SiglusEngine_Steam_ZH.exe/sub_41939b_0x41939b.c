// 函数: sub_41939b
// 地址: 0x41939b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_3c = edi
int32_t* i_3 = arg1

if (arg2 == 0 || arg3 == 0)
    return 0x8876086c

int32_t* esi_1 = arg4

if (esi_1 != 0 || arg5 != 0)
    int32_t var_30 = 0
    int32_t var_2c
    __builtin_memcpy(&var_2c, 
        "\x05\x00\x00\x00\x04\x00\x00\x00\x01\x00\x00\x00\x03\x00\x00\x00\x08\x00\x00\x00\x07\x00\x00\x"
    "00\x02\x00\x00\x00\x06\x00\x00\x00", 
        0x20)
    char* eax_2 = __strdup(sub_761a44(4, nullptr))
    bool cond:3_1
    
    if (eax_2 != 0)
        char* esi_2 = eax_2
        void* const edi_1 = &data_ab55ec
        int32_t i = 2
        cond:3_1 = true
        
        while (i != 0)
            char temp1_1 = *esi_2
            char temp2_1 = *edi_1
            cond:3_1 = temp1_1 == temp2_1
            esi_2 = &esi_2[1]
            edi_1 += 1
            i -= 1
            
            if (temp1_1 != temp2_1)
                break
        
        esi_1 = arg4
    
    if (eax_2 == 0 || not(cond:3_1))
        sub_761a44(4, &data_ab55ec)
    
    int32_t i_1 = 0
    struct _EXCEPTION_REGISTRATION_RECORD* edi_2 = arg3
    
    do
        i_3[0x10] = arg5
        int32_t eax_5 = (&var_30)[i_1]
        i_3[0x11] = 3
        i_3[0x12] = eax_5
        
        if (eax_5 u<= 8)
            struct _EXCEPTION_REGISTRATION_RECORD* eax_6
            
            switch (eax_5)
                case 0
                    eax_6 = sub_41867d(arg2, arg3)
                case 1
                    eax_6 = sub_417194(i_3, edi_2, arg2, arg3)
                case 2
                    eax_6 = sub_417435(i_3, arg2, arg3)
                case 3
                    eax_6 = sub_417c3a(i_3, esi_1, edi_2, arg2, arg3)
                case 4
                    eax_6 = sub_4182d2(i_3, arg2, arg3)
                case 5
                    eax_6 = sub_41795f(i_3, arg2, arg3)
                case 6
                    eax_6 = sub_4165de(i_3, arg2, arg3)
                case 7
                    eax_6 = sub_4189dd(i_3, arg2, arg3)
                    int16_t top = top - 1
                    unimplemented  {call 0x4189dd}
                case 8
                    eax_6 = sub_4186ce(i_3, arg2, arg3)
            
            edi_2 = eax_6
        
        if (edi_2 s>= 0)
            break
        
        int32_t eax_7 = i_3[1]
        
        if (eax_7 != 0 && i_3[0xe] != 0)
            j__free(eax_7)
        
        int32_t eax_8 = i_3[2]
        
        if (eax_8 != 0 && i_3[0xf] != 0)
            j__free(eax_8)
        
        void* ecx_12 = i_3[0x13]
        
        if (ecx_12 != 0)
            sub_41656c(ecx_12, 1)
        
        void* ecx_13 = i_3[0x14]
        
        if (ecx_13 != 0)
            sub_41656c(ecx_13, 1)
        
        i_1 += 1
        i_3[1] = 0
        i_3[2] = 0
        i_3[0xe] = 0
        i_3[0xf] = 0
        i_3[0x13] = 0
        i_3[0x14] = 0
    while (i_1 u< 9)
    
    if (eax_2 != 0)
        char* esi_3 = eax_2
        void* const edi_3 = &data_ab55ec
        int32_t i_2 = 2
        bool cond:5_1 = true
        
        while (i_2 != 0)
            char temp3_1 = *esi_3
            char temp4_1 = *edi_3
            cond:5_1 = temp3_1 == temp4_1
            esi_3 = &esi_3[1]
            edi_3 += 1
            i_2 -= 1
            
            if (temp3_1 != temp4_1)
                break
        
        if (not(cond:5_1))
            sub_761a44(4, eax_2)
        
        _free(eax_2)
        esi_1 = arg4
    
    if (i_1 == 9)
        return 0x88760b59
    
    if (esi_1 != 0)
        __builtin_memset(esi_1, 0, 0x1c)
        *esi_1 = i_3[3]
        esi_1[1] = i_3[4]
        esi_1[2] = i_3[5]
        esi_1[3] = 1
        esi_1[4] = sub_40608a(*i_3)
        esi_1[5] = i_3[0x11]
        esi_1[6] = i_3[0x12]
        void* eax_16 = &i_3[0x13]
        
        while (*eax_16 != 0)
            esi_1[3] += 1
            eax_16 = *eax_16 + 0x4c
    
    do
        int32_t* j = i_3
        
        if (i_3 != 0)
            do
                j[8] = j[3]
                j[9] = j[4]
                int32_t edx_3 = j[5]
                j[6] = 0
                j[7] = 0
                j[0xa] = 0
                j[0xb] = edx_3
                j = j[0x13]
            while (j != 0)
        
        i_3 = i_3[0x14]
    while (i_3 != 0)

return 0
