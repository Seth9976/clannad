// 函数: sub_5919d0
// 地址: 0x5919d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = data_1cd43e8
int32_t esi = data_1cd43dc
int32_t i = data_1cd43cc
int32_t result = data_1cd43d0
int32_t edx = data_1cd43e4
int32_t ebx = data_1cd43d8

do
    int32_t esi_1
    int32_t edi_1
    edi_1, esi_1 = __builtin_memcpy(edi, esi, result << 2)
    edi = edi_1 + edx
    esi = esi_1 + ebx
    i -= 1
while (i != 0)

return result
