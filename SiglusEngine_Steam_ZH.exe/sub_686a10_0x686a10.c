// 函数: sub_686a10
// 地址: 0x686a10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = 0
int32_t* edi = arg1[1]
arg1[1] = 0

if (edi != 0)
    bool cond:1_1 = edi[1] != 1
    edi[1]
    edi[1] -= 1
    
    if (not(cond:1_1))
        (*(*edi + 4))()
        int32_t ebx_1 = edi[2]
        edi[2] -= 1
        
        if (ebx_1 == 1)
            (*(*edi + 8))()

void* result = &arg1[3]
arg1[2] = 0
bool cond:0 = *(result + 0x14) u< 8
*(result + 0x10) = 0

if (not(cond:0))
    result = *result

*result = 0
__builtin_memset(&arg1[9], 0, 0x13)
return result
