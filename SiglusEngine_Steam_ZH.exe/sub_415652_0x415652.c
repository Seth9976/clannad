// 函数: sub_415652
// 地址: 0x415652
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg2
int32_t var_10 = arg1
int16_t eax_1

if ((arg3 & 0xc0bfefff) == 0)
    eax_1 = (*(esi + 0x214)).w

if ((arg3 & 0xc0bfefff) != 0 || (eax_1:1.b & 4) != 0 || (eax_1.b & 0x40) != 0)
    arg2 = 0x8876086c
else
    void* eax_3 = sub_40b67c(esi, esi + 0x24c, 0)
    arg2 = eax_3
    
    if (eax_3 s>= 0)
        if ((*(esi + 0x218) & 0x20) != 0)
            arg3:3.b |= 0x10
        
        arg2 = sub_4145e1(esi, arg1, arg3, arg4, arg5, arg6, arg7, nullptr, nullptr)

if (*(esi + 0x24c) != 0)
    int32_t* esi_1 = *(esi + 0x248)
    (*(*esi_1 + 0x30))(esi_1)
    *(esi + 0x24c) = 0

return arg2
