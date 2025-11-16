// 函数: sub_54d190
// 地址: 0x54d190
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = *arg2
int32_t esi = arg2[1]
arg2[1] = 0
*arg2 = 0
*arg1 = edx
int32_t* ebx = arg1[1]
arg1[1] = esi

if (ebx != 0)
    bool cond:0_1 = ebx[1] != 1
    ebx[1]
    ebx[1] -= 1
    
    if (not(cond:0_1))
        (*(*ebx + 4))()
        int32_t esi_1 = ebx[2]
        ebx[2] -= 1
        
        if (esi_1 == 1)
            (*(*ebx + 8))()

return arg1
