// 函数: sub_40bb64
// 地址: 0x40bb64
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = *(arg1 + 0x270)

if (ecx != 0)
    return (*(*ecx + 4))(ecx)

*(arg1 + 0x26c) += 1
return *(arg1 + 0x26c)
