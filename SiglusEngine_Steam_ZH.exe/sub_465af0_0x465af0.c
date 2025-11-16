// 函数: sub_465af0
// 地址: 0x465af0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg1 + arg3
arg3.b = 0x46

if (arg1 u>= 0xe && *arg5 == 0x4a && arg5[1] == 0x46 && arg5[2] == 0x49 && arg5[3] == 0x46)
    arg2.b = arg5[4]
    
    if (arg2.b == 0)
        arg1.b = arg5[6]
        arg2.b = arg5[7]
        arg3.b = arg5[5]
        *(arg4 + 0x121) = arg1.b
        arg1.w = zx.w(arg5[8])
        *(arg4 + 0x122) = arg2.b
        arg2.w = zx.w(arg5[9])
        arg4[0x47] = 1
        arg4[0x48].b = arg3.b
        int32_t eax_1 = (arg1 << 8) + arg2
        arg2.w = zx.w(arg5[0xb])
        arg4[0x49].w = eax_1.w
        eax_1.w = zx.w(arg5[0xa])
        *(arg4 + 0x126) = (eax_1 << 8).w + arg2.w
        
        if (arg3.b != 1)
            void* eax_4 = *arg4
            uint32_t edx = zx.d(arg5[6])
            *(eax_4 + 0x14) = 0x77
            *(eax_4 + 0x18) = zx.d(arg3.b)
            *(eax_4 + 0x1c) = edx
            (*(eax_4 + 4))(arg4, 0xffffffff)
        
        void* eax_5 = *arg4
        uint32_t edx_1 = zx.d(*(arg4 + 0x121))
        *(eax_5 + 0x18) = zx.d(arg4[0x48].b)
        uint32_t ecx_2 = zx.d(arg4[0x49].w)
        *(eax_5 + 0x1c) = edx_1
        uint32_t edx_2 = zx.d(*(arg4 + 0x126))
        *(eax_5 + 0x20) = ecx_2
        uint32_t ecx_3 = zx.d(*(arg4 + 0x122))
        *(eax_5 + 0x24) = edx_2
        *(eax_5 + 0x28) = ecx_3
        *(eax_5 + 0x14) = 0x57
        (*(eax_5 + 4))(arg4, 1)
        char edx_3 = arg5[0xc]
        char ecx_4 = arg5[0xd]
        
        if ((edx_3 | ecx_4) != 0)
            void* eax_7 = *arg4
            *(eax_7 + 0x14) = 0x5a
            *(eax_7 + 0x18) = zx.d(edx_3)
            *(eax_7 + 0x1c) = zx.d(ecx_4)
            (*(eax_7 + 4))(arg4, 1)
        
        int32_t result = zx.d(arg5[0xc]) * zx.d(arg5[0xd]) * 3
        
        if (ebx - 0xe == result)
            return result
        
        void* eax_10 = *arg4
        *(eax_10 + 0x14) = 0x58
        *(eax_10 + 0x18) = ebx - 0xe
        return (*(eax_10 + 4))(arg4, 1)

if (arg1 u>= 6 && *arg5 == 0x4a && arg5[1] == 0x46)
    arg3.b = arg5[2]
    arg1.b = 0x58
    
    if (arg3.b == 0x58 && arg5[3] == 0x58)
        arg1.b = arg5[4]
        
        if (arg1.b == 0)
            uint32_t ecx_6 = zx.d(arg5[5])
            
            if (ecx_6 == 0x10)
                void* eax_20 = *arg4
                *(eax_20 + 0x14) = 0x6c
                *(eax_20 + 0x18) = ebx
                return (*(eax_20 + 4))(arg4, 1)
            
            if (ecx_6 == 0x11)
                void* eax_18 = *arg4
                *(eax_18 + 0x14) = 0x6d
                *(eax_18 + 0x18) = ebx
                return (*(eax_18 + 4))(arg4, 1)
            
            void* eax_15 = *arg4
            
            if (ecx_6 == 0x13)
                *(eax_15 + 0x14) = 0x6e
                *(eax_15 + 0x18) = ebx
                return (*(eax_15 + 4))(arg4, 1)
            
            *(eax_15 + 0x14) = 0x59
            *(eax_15 + 0x18) = ecx_6
            *(eax_15 + 0x1c) = ebx
            return (*(eax_15 + 4))(arg4, 1)

void* eax_22 = *arg4
*(eax_22 + 0x14) = 0x4d
*(eax_22 + 0x18) = ebx
return (*(eax_22 + 4))(arg4, 1)
