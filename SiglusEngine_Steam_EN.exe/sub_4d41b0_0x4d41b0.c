// 函数: sub_4d41b0
// 地址: 0x4d41b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t eax = data_20c02b0:8

if (eax s> 0)
    data_20c02b0:8 = eax + 0x200
    int32_t eax_3 = (eax + 0x200) * 0xc
    sub_4d6ae0(eax_3, &data_20c02b0:4, &data_20c02b0, eax_3)
else
    data_20c02b0:8 = 0x200
    sub_4d6960(eax, &data_20c02b0:4, &data_20c02b0, 0x1800, "FontList")

if (data_20c02b0.d == 0)
    MessageBoxA(data_7027bc, 0x61cadc, "FontListFunk_ERR", MB_OK)
    enum MESSAGEBOX_RESULT eax_4
    eax_4.b = 0
    return eax_4

int32_t ecx_1 = data_20c02b0:0xc * 3
BOOL eax_6 = data_20c02b0:4
*(eax_6 + (ecx_1 << 2)) = 0
*(eax_6 + (ecx_1 << 2) + 4) = 0
int32_t* edi = eax_6 + (ecx_1 << 2)

if (arg2 != 0)
    uint32_t eax_7 = sub_4cfc80(arg2)
    sub_4d1c30(sub_4d6960(eax_7, &edi[1], edi, eax_7, "FontListName"), arg2, edi[1], eax_7)

eax_6.b = arg3
edi[2].b = eax_6.b
eax_6.b = 1
data_20c02b0:0xc += 1
return eax_6
