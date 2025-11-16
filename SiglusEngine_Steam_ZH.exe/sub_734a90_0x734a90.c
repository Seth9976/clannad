// 函数: sub_734a90
// 地址: 0x734a90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg1[0x70]
int32_t ebx = *(edi + 0x18)

if (arg1[0x13] != 0)
    arg1[0x13] = 2

if (arg2 == 0)
    bool cond:1_1 = arg1[0x13] == 2
    char* (* eax_1)(void* arg1, int32_t arg2, int32_t* arg3, int32_t arg4) = sub_7344f0
    *(edi + 8) = sub_52e4f0
    
    if (cond:1_1)
        eax_1 = sub_734710
    
    *(edi + 4) = eax_1
    int32_t eax = arg1[0x1c]
    arg2.d = eax
    
    if (eax s< 1)
        *(*arg1 + 0x14) = 0x3a
        *(*arg1 + 0x18) = 1
        (**arg1)(arg1)
        eax = arg2.d
    
    if (eax s> 0x100)
        *(*arg1 + 0x14) = 0x3b
        *(*arg1 + 0x18) = 0x100
        (**arg1)(arg1)
    
    if (arg1[0x13] == 2)
        int32_t ecx_2 = (arg1[0x17] + 2) * 6
        arg2.d = ecx_2
        
        if (*(edi + 0x20) == 0)
            int32_t eax_14 = (*(arg1[1] + 4))(arg1, 1, ecx_2)
            ecx_2 = arg2.d
            *(edi + 0x20) = eax_14
        
        _memset(*(edi + 0x20), 0, ecx_2)
        
        if (*(edi + 0x28) == 0)
            sub_7349c0(arg1)
        
        *(edi + 0x24) = 0
else
    *(edi + 4) = sub_733830
    *(edi + 8) = sub_734a60
    *(edi + 0x1c) = 1

if (*(edi + 0x1c) == 0)
    return 

for (int32_t i = 0; i s< 0x20; i += 1)
    _memset(*(ebx + (i << 2)), 0, 0x1000)

*(edi + 0x1c) = 0
