// 函数: sub_5b17d0
// 地址: 0x5b17d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = arg2[1]
int32_t edi = *arg2

if (ecx != 0)
    *(ecx + 4)
    *(ecx + 4) += 1

*arg1 = edi
int32_t* edi_1 = arg1[1]
arg1[1] = ecx

if (edi_1 != 0)
    bool cond:0_1 = edi_1[1] != 1
    edi_1[1]
    edi_1[1] -= 1
    
    if (not(cond:0_1))
        (*(*edi_1 + 4))()
        int32_t ebx_1 = edi_1[2]
        edi_1[2] -= 1
        
        if (ebx_1 == 1)
            (*(*edi_1 + 8))()

return arg1
