// 函数: sub_4dece0
// 地址: 0x4dece0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = arg1

if (edx s< 0)
    edx = 0
else if (edx s> 0x64)
    edx = 0x64

bool cond:0 = data_1cd450c == 0
data_63ec84 = edx

if (not(cond:0))
    int32_t* eax_1 = data_1cd4518
    (*(*eax_1 + 0x64))(eax_1, edx)
