// 函数: sub_466a88
// 地址: 0x466a88
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg1

if ((*(result + 0x10c) & 0x20) == 0)
    if ((*(result + 0x5d) & 8) == 0)
    label_466ab3:
        void** esi_1 = result + 0x100
        result = sub_498726(*esi_1, arg2, arg3)
        *esi_1 = result
else if ((*(result + 0x5c) & 0x300) != 0x300)
    goto label_466ab3

return result
