// 函数: sub_6dfa20
// 地址: 0x6dfa20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
WaitForSingleObject(data_4ebe314, 0xffffffff)
HANDLE hSemaphore = data_4ebe314
data_4ebe304 = data_4ebe300
ReleaseSemaphore(hSemaphore, 1, nullptr)
HANDLE hObject = data_4ebe314

if (hObject != 0)
    CloseHandle(hObject)
    data_4ebe314 = 0

data_4ebe318 = 1
uint32_t eax_1 = GetTickCount()

while (data_4ebe318 != 0)
    if (GetTickCount() u> eax_1 + 0x7d0)
        break
    
    Sleep(0x64)

BOOL result = CloseHandle(data_4ebe30c)
data_4ebe30c = 0
return result
