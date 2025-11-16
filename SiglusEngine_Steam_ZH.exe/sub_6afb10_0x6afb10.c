// 函数: sub_6afb10
// 地址: 0x6afb10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_c = arg1
int32_t* ebx = arg1
int32_t edi = ebx[1]
int32_t esi = *ebx
int32_t eax
int32_t eax_1
int32_t ecx
eax_1, ecx = sub_6af2c0(eax, &ebx[2], arg1, edi)

if (eax_1.b == 0)
    *ebx = esi
    ebx[1] = edi

int32_t var_1c_1 = ecx
char result = sub_6af630(eax_1, arg2, ebx, ebx[1])

if (result != 0)
    return 1

*ebx = esi
ebx[1] = edi
return result
