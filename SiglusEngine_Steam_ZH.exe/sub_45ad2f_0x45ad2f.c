// 函数: sub_45ad2f
// 地址: 0x45ad2f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t edi
int32_t var_14 = edi
void* edi_3 = ((*arg2 * arg2[1]) << 2) + 0x28
int32_t* pbmi = sub_745f3f(edi_3)

if (pbmi == 0)
    return nullptr

__builtin_memset(__builtin_memset(pbmi, 0, edi_3 u>> 2 << 2), 0, edi_3 & 3)
*pbmi = 0x28
pbmi[1] = *arg2
pbmi[2] = neg.d(arg2[1])
pbmi[4] = 0
pbmi[3].w = 1
*(pbmi + 0xe) = 0x20
HBITMAP result = CreateDIBSection(*(arg1 + 0x10), pbmi, DIB_RGB_COLORS, arg3, nullptr, 0)
j__free(pbmi)
return result
