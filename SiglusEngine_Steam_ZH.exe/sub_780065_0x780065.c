// 函数: sub_780065
// 地址: 0x780065
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

while (true)
    int32_t eax
    eax.b = arg5[2]
    int32_t eax_2
    eax_2.b = arg5[1]
    int32_t eax_4
    eax_4.b = *arg5
    arg4[-0x31] = (*(&data_4e3d680 + (eax << 2)) + *(&data_4e3e280 + (eax_2 << 2))
        + *(&data_4e3de80 + (eax_4 << 2))) u>> 8
    arg4[-0x30] = *(&data_4e3da80 + arg4[-0x32])
    int32_t ebx_5
    ebx_5.b = arg5[2]
    int32_t eax_7 = arg4[-0x31]
    int32_t eax_9 = arg4[-0x37]
    int32_t eax_11
    eax_11.b = *(arg6 + 2)
    char eax_12 = eax_11.b + (*(((eax_9
        + *(((eax_7 + *(((ebx_5 - eax_7) << 2) + arg4[-0x30]) - eax_9) << 2) + arg4[-0x34])
        - eax_11) << 2) + arg2)).b
    *(arg6 + 2) = eax_12
    int32_t ebx_17
    ebx_17.b = arg5[1]
    int32_t eax_13 = arg4[-0x31]
    int32_t eax_15 = arg4[-0x36]
    int32_t eax_17
    eax_17.b = *(arg6 + 1)
    char eax_18 = eax_17.b + (*(((eax_15
        + *(((eax_13 + *(((ebx_17 - eax_13) << 2) + arg4[-0x30]) - eax_15) << 2) + arg4[-0x34])
        - eax_17) << 2) + arg2)).b
    *(arg6 + 1) = eax_18
    int32_t ebx_29
    ebx_29.b = *arg5
    int32_t eax_19 = arg4[-0x31]
    int32_t eax_21 = arg4[-0x35]
    int32_t eax_23
    eax_23.b = *arg6
    char result = eax_23.b + (*(((eax_21
        + *(((eax_19 + *(((ebx_29 - eax_19) << 2) + arg4[-0x30]) - eax_21) << 2) + arg4[-0x34])
        - eax_23) << 2) + arg2)).b
    *arg6 = result
    int32_t i
    
    do
        arg5 = &arg5[4]
        arg6 += 4
        int32_t temp0_1 = arg3
        arg3 -= 1
        
        if (temp0_1 == 1)
            arg5 = &arg5[arg4[-0x47]]
            arg6 += arg4[-0x4b]
            
            if (__return_addr == 1)
                *arg4
                return result
            
            __return_addr -= 1
            arg3 = arg4[-0x50]
        
        i.b = arg5[3]
    while (i == 0)
    
    arg2 = *((i << 2) + &data_4e3da80)
