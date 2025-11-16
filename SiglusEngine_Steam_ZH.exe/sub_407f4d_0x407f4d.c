// 函数: sub_407f4d
// 地址: 0x407f4d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg2
*ebx = 0
int32_t edi
int32_t var_1c = edi
int32_t result = 0

if (*(arg1 + 0x44) == 0)
    ebx[1] = 5
else
    ebx[1] = 6

int32_t eax_3 = sub_745f3f(ebx[1] << 4)
ebx[2] = eax_3

if (eax_3 != 0)
    int32_t ecx_2 = ebx[1] << 4
    __builtin_memset(__builtin_memset(eax_3, 0, ecx_2 u>> 2 << 2), 0, ecx_2 & 3)
    *(ebx[2] + 0xc) = sub_745f3f(0x10)
    *(ebx[2] + 0x1c) = sub_745f3f(4)
    *(ebx[2] + 0x2c) = sub_745f3f(0x10)
    *(ebx[2] + 0x3c) = sub_745f3f(0x10)
    *(ebx[2] + 0x4c) = sub_745f3f(0x10)
    void* eax_10 = ebx[2]
    
    if (*(eax_10 + 0xc) == 0 || *(eax_10 + 0x1c) == 0 || *(eax_10 + 0x2c) == 0
            || *(eax_10 + 0x3c) == 0)
        goto label_407f94
    
    *(eax_10 + 8) = 0x10
    *(ebx[2] + 0x18) = 4
    *(ebx[2] + 0x28) = 0x10
    *(ebx[2] + 0x38) = 0x10
    *(ebx[2] + 0x48) = 0x10
    *(ebx[2] + 4) = 2
    *(ebx[2] + 0x14) = 2
    *(ebx[2] + 0x24) = 2
    *(ebx[2] + 0x34) = 2
    *(ebx[2] + 0x44) = 2
    void* eax_15 = ebx[2]
    int32_t ecx_16 = *(eax_15 + 8)
    int32_t esi_2
    int32_t edi_5
    edi_5, esi_2 = __builtin_memcpy(*(eax_15 + 0xc), arg1, ecx_16 u>> 2 << 2)
    __builtin_memcpy(edi_5, esi_2, ecx_16 & 3)
    void* edx_2 = ebx[2]
    int32_t ecx_20 = *(edx_2 + 0x18)
    void* eax_17 = arg1
    int32_t esi_4
    int32_t edi_7
    edi_7, esi_4 = __builtin_memcpy(*(edx_2 + 0x1c), eax_17 + 0x40, ecx_20 u>> 2 << 2)
    __builtin_memcpy(edi_7, esi_4, ecx_20 & 3)
    void* edx_4 = ebx[2]
    int32_t ecx_24 = *(edx_4 + 0x28)
    int32_t esi_6
    int32_t edi_9
    edi_9, esi_6 = __builtin_memcpy(*(edx_4 + 0x2c), eax_17 + 0x20, ecx_24 u>> 2 << 2)
    __builtin_memcpy(edi_9, esi_6, ecx_24 & 3)
    void* edx_6 = ebx[2]
    int32_t ecx_28 = *(edx_6 + 0x38)
    int32_t esi_8
    int32_t edi_11
    edi_11, esi_8 = __builtin_memcpy(*(edx_6 + 0x3c), eax_17 + 0x30, ecx_28 u>> 2 << 2)
    __builtin_memcpy(edi_11, esi_8, ecx_28 & 3)
    void* edx_8 = ebx[2]
    int32_t ecx_32 = *(edx_8 + 0x48)
    int32_t esi_10
    int32_t edi_13
    edi_13, esi_10 = __builtin_memcpy(*(edx_8 + 0x4c), eax_17 + 0x10, ecx_32 u>> 2 << 2)
    __builtin_memcpy(edi_13, esi_10, ecx_32 & 3)
    int32_t* esi_11 = nullptr
    arg2 = nullptr
    
    if (ebx[1] u> 0)
        int32_t* var_c_1 = nullptr
        
        while (true)
            char* eax_20 = (&data_b4e2f0)[arg2]
            void* edi_14 = &eax_20[1]
            char i
            
            do
                i = *eax_20
                eax_20 = &eax_20[1]
            while (i != 0)
            *(esi_11 + ebx[2]) = sub_745f3f(eax_20 - edi_14 + 1)
            int32_t eax_24 = *(esi_11 + ebx[2])
            
            if (eax_24 == 0)
                goto label_407f94
            
            var_c_1 = &var_c_1[4]
            int32_t esi_13
            int32_t edi_17
            edi_17, esi_13 =
                __builtin_memcpy(eax_24, (&data_b4e2f0)[arg2], (eax_20 - edi_14 + 1) u>> 2 << 2)
            arg2 += 1
            __builtin_memcpy(edi_17, esi_13, (eax_20 - edi_14 + 1) & 3)
            
            if (arg2 u>= ebx[1])
                eax_17 = arg1
                break
            
            esi_11 = var_c_1
    
    if (*(eax_17 + 0x44) != 0)
        *(ebx[2] + 0x54) = 1
        char* eax_27 = *(eax_17 + 0x44)
        void* ecx_41
        
        do
            ecx_41.b = *eax_27
            eax_27 = &eax_27[1]
        while (ecx_41.b != 0)
        *(ebx[2] + 0x58) = eax_27 - &eax_27[1] + 1
        *(ebx[2] + 0x5c) = sub_745f3f(*(ebx[2] + 0x58))
        void* eax_32 = ebx[2]
        int32_t edi_18 = *(eax_32 + 0x5c)
        
        if (edi_18 == 0)
            goto label_407f94
        
        int32_t ecx_44 = *(eax_32 + 0x58)
        int32_t esi_16
        int32_t edi_19
        edi_19, esi_16 = __builtin_memcpy(edi_18, *(arg1 + 0x44), ecx_44 u>> 2 << 2)
        __builtin_memcpy(edi_19, esi_16, ecx_44 & 3)
else
    ebx[1] = 0
label_407f94:
    result = 0x8007000e
    sub_407a15(ebx)

return result
