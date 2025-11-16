// 函数: sub_71cea0
// 地址: 0x71cea0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

arg1[8] = arg2
arg1[9] = arg3
int32_t eax_3 = arg1[3] - 1
arg1[1] = 0

switch (eax_3)
    case 0
        if (sub_71cfd0(arg1) == 0)
            return 0
    case 1
        if (sub_71d040(arg1) == 0)
            return 0
        
        arg1[3] = 3
        return sub_71d0a0(arg1)
    case 2
        return sub_71d0a0(arg1)
    case 3
        eax_3.b = 1
        return eax_3

arg1[3] = 0

if (sub_71d0e0(arg1) != 0)
    char i
    
    do
        bool cond:0_1 = arg1[0x10] != 8
        arg1[3] = 1
        arg1[1] = 0
        
        if (not(cond:0_1))
            void* edx_1 = arg1[0x11]
            void* ebx_1 = arg1[0xf]
            int32_t ecx_1 = arg1[9]
            void* eax_7 = ebx_1 + edx_1
            
            if (ecx_1 u>= eax_7)
                sub_748840(arg1[8] + ebx_1, &arg1[0x12], edx_1)
                arg1[0xf] += arg1[0x11]
                arg1[0x10] = 0
                arg1[0x11] = 1
                arg1[0x12].b = 0
            else
                arg1[1] = eax_7 - ecx_1
                
                if (eax_7 != ecx_1)
                    goto label_71cfb7
        
        int32_t ecx_2 = arg1[4]
        arg1[3] = 0
        
        if (ecx_2 != 0)
            void* temp0_1 = divu.dp.d(0:(*arg1), ecx_2)
            
            if (arg1[5] != temp0_1)
                arg1[5] = temp0_1
                goto label_71cfb7
        
        i = sub_71d0e0(arg1)
    while (i != 0)

arg1[3] = 2

if (sub_71d040(arg1).b != 0)
    arg1[3] = 3
    return sub_71d0a0(arg1)

label_71cfb7:
void* eax_8
eax_8.b = 0
return eax_8
