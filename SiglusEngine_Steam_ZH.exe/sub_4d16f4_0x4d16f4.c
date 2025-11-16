// 函数: sub_4d16f4
// 地址: 0x4d16f4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg5 == 0)
    return nullptr

char* ecx_1 = arg3
void* i_1 = arg2
int32_t edi
int32_t var_20_1 = edi

while (true)
    int32_t eax_1 = *(i_1 + 4)
    int32_t var_14
    int16_t var_10
    void* const eax_6
    bool cond:4_1
    
    if (eax_1 == 1)
        var_14 = 0
        int16_t* edi_5 = &var_10
        *edi_5 = 0
        void* edi_6 = &edi_5[2]
        *edi_6 = 0
        *(edi_6 + 4) = 0
        var_14.w = 5
        var_14:2.w = 0
        var_10 = 1
        int16_t eax_17
        int16_t ecx_3
        eax_17, ecx_3 = sub_4d1691(i_1)
        int16_t var_e_2 = eax_17
        int16_t var_c_2 = ecx_3
        void* i = i_1
        int16_t var_a
        
        do
            var_a += 1
            i = *(i + 0xc)
        while (i != 0)
        
        char* ebx_1 = sub_745f3f(zx.d(var_a) << 3)
        arg3 = ebx_1
        
        if (ebx_1 == 0)
            return 0x8007000e
        
        do
            void* eax_21 = *(i_1 + 8)
            void* edi_9 = *(eax_21 + 0x18)
            void* eax_24 = sub_4c6c51(arg1, *(*(eax_21 + 0x14) + 0x18), 0xffffffff, 7, ebx_1)
            
            if (eax_24 s< 0)
                j__free(arg3)
                return eax_24
            
            void* eax_26 = sub_4d16f4(arg1, *(edi_9 + 0x20), 1, arg4, &ebx_1[4])
            
            if (eax_26 s< 0)
                j__free(arg3)
                return eax_26
            
            i_1 = *(i_1 + 0xc)
            ebx_1 = &ebx_1[8]
        while (i_1 != 0)
        
        void var_8
        void* eax_29 = sub_4c6c51(arg1, arg3, zx.d(var_a) << 3, 2, &var_8)
        j__free(arg3)
        
        if (eax_29 s< 0)
            return eax_29
        
        eax_6 = sub_4c6c51(arg1, &var_14, 0x10, 2, arg5)
        cond:4_1 = eax_6 s< 0
    label_4d196e:
        
        if (cond:4_1)
            return eax_6
        
        return nullptr
    
    if (eax_1 != 8)
        if (eax_1 != 9)
            return 0x80004005
        
        var_14 = 0
        int16_t* edi_1 = &var_10
        *edi_1 = 0
        void* edi_2 = &edi_1[2]
        *edi_2 = 0
        *(edi_2 + 4) = 0
        int32_t eax_7 = *(i_1 + 0x10)
        
        if (eax_7 == 0)
            var_14.w = 0
        else if (eax_7 == 1)
            var_14.w = 1
        else if (eax_7 == 2)
            uint16_t eax_13
            eax_13.b = not.b((*(i_1 + 0x20) u>> 0xa).w.b)
            var_14.w = (eax_13 & 1) | 2
        else if (eax_7 == 3)
            var_14.w = 4
        
        uint32_t eax_16 = *(i_1 + 0x14)
        
        if (eax_16 u> 0x1c)
            var_14:2.w = 0
        else
            switch (eax_16)
                case 0
                    var_14:2.w = 1
                case 1, 2, 3, 4, 5, 6, 7, 8, 0xd
                    var_14:2.w = 2
                case 9, 0xa, 0xb, 0xc
                    var_14:2.w = 3
                case 0xe
                    var_14:2.w = 4
                case 0xf
                    var_14:2.w = 5
                case 0x10
                    var_14:2.w = 6
                case 0x11
                    var_14:2.w = 7
                case 0x12
                    var_14:2.w = 8
                case 0x13
                    var_14:2.w = 9
                case 0x14
                    if ((arg4 & 0x200000) != 0)
                        var_14:2.w = 0xc
                    else if ((arg4 & &__dos_header) == 0)
                        eax_16.w = (arg4 u>> 0x16).w & 2
                        eax_16.w |= 0xc
                        var_14:2.w = eax_16.w
                    else
                        var_14:2.w = 0xd
                case 0x15
                    var_14:2.w = 0xb
                case 0x16
                    var_14:2.w = 0xc
                case 0x17
                    var_14:2.w = 0xd
                case 0x18
                    var_14:2.w = 0xe
                case 0x19
                    var_14:2.w = 0xf
                case 0x1a
                    var_14:2.w = 0x10
                case 0x1b
                    var_14:2.w = 0x11
                case 0x1c
                    var_14:2.w = 0x12
        
        eax_16.w = *(i_1 + 0x18)
        var_10 = eax_16.w
        eax_16.w = *(i_1 + 0x1c)
        int16_t var_e_1 = eax_16.w
        int16_t var_c_1 = ecx_1.w
        eax_6 = sub_4c6c51(arg1, &var_14, 0x10, 2, arg5)
        cond:4_1 = eax_6 s< 0
        goto label_4d196e
    
    int32_t eax_4 = *(i_1 + 0x14)
    i_1 = *(i_1 + 0x10)
    ecx_1 *= eax_4
