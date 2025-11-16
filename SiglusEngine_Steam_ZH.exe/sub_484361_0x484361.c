// 函数: sub_484361
// 地址: 0x484361
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg1[8]
int32_t edi
int32_t var_8 = edi
*arg1 = &data_ac7abc
arg1[1] = &data_ac7a90

if (eax != 0)
    _free(eax)

int32_t* esi_1 = arg1[0xd]

if (esi_1 != 0)
    (*(*esi_1 + 8))(esi_1)

return sub_48404c(&arg1[1]) __tailcall
