// 函数: sub_4611a0
// 地址: 0x4611a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

BOOL* eax_3 = data_1299914
int32_t ecx = eax_3 << 3
int32_t esi = arg1[3]
int32_t edx = arg1[4]

if (data_1299910 s< esi)
    esi = data_1299910

if (ecx s> edx)
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = sx.q(edx)
    eax_3 = (eax_1 + (edx_1 & 7)) s>> 3

int32_t var_c = 0
edx.b = 0
return sub_423d30(eax_3, edx.b, arg1, ecx, 8, 0, 0, esi, eax_3, 0, nullptr)
