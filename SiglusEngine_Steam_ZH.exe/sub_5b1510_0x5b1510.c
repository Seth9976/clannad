// 函数: sub_5b1510
// 地址: 0x5b1510
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = arg2[1]
int32_t ebx = *arg2

if (ecx != 0)
    *(ecx + 4)
    *(ecx + 4) += 1

*arg1 = ebx
int32_t* ebx_1 = arg1[1]
arg1[1] = ecx

if (ebx_1 != 0)
    bool cond:0_1 = ebx_1[1] != 1
    ebx_1[1]
    ebx_1[1] -= 1
    
    if (not(cond:0_1))
        (*(*ebx_1 + 4))()
        bool cond:1_1 = ebx_1[2] != 1
        ebx_1[2]
        ebx_1[2] -= 1
        
        if (not(cond:1_1))
            (*(*ebx_1 + 8))()

arg1[2] = arg2[2]

if (&arg1[3] != &arg2[3])
    sub_52e3c0(&arg1[3], &arg2[3], 0, 0xffffffff)

arg1[9] = arg2[9]
arg1[0xa] = arg2[0xa]
arg1[0xb] = arg2[0xb]
arg1[0xc].b = arg2[0xc].b
*(arg1 + 0x31) = *(arg2 + 0x31)
*(arg1 + 0x32) = *(arg2 + 0x32)
*(arg1 + 0x33) = *(arg2 + 0x33)
arg1[0xd].b = arg2[0xd].b
*(arg1 + 0x35) = *(arg2 + 0x35)
*(arg1 + 0x36) = *(arg2 + 0x36)
return arg1
