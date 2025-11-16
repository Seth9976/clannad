// 函数: sub_7487e6
// 地址: 0x7487e6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esp_1 = *(arg1 - 0x18)
int32_t esi = *(arg1 - 0x20)
*(arg1 - 0x24) = esi

if (*(arg1 - 0x1c) != 0)
    __c_exit()
    return sub_748800(arg1, esi) __tailcall

*(esp_1 - 4) = esi
__exit()
noreturn
