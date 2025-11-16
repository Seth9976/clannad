// 函数: sub_48493d
// 地址: 0x48493d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = arg1[0xe]
int32_t edi
int32_t var_8 = edi
*arg1 = &data_ac7b68
arg1[1] = &data_ac7b3c

if (ecx != 0)
    sub_48491c(ecx, 1)

int32_t eax = arg1[0x10]
arg1[0xe] = 0

if (eax != 0)
    _free(eax)
    arg1[0x10] = 0

sub_4844bc(&arg1[0xa])
return sub_48404c(&arg1[1]) __tailcall
