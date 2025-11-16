// 函数: sub_42b852
// 地址: 0x42b852
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi

while (InterlockedCompareExchange(0xb96714, 1, 0) == 1)
    Sleep(1)

if (data_b96710 == 0)
    InitializeCriticalSection(&data_b966f8)

data_b96710 += 1
InterlockedExchange(0xb96714, 0)
return EnterCriticalSection(&data_b966f8)
