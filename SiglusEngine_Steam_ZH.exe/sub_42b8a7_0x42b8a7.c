// 函数: sub_42b8a7
// 地址: 0x42b8a7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
LeaveCriticalSection(&data_b966f8)

while (InterlockedCompareExchange(0xb96714, 1, 0) == 1)
    Sleep(1)

int32_t temp0 = data_b96710
data_b96710 -= 1

if (temp0 == 1)
    DeleteCriticalSection(&data_b966f8)

return InterlockedExchange(0xb96714, 0)
