// 函数: sub_6df9b0
// 地址: 0x6df9b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

WaitForSingleObject(data_4ebe314, 0xffffffff)
ReleaseSemaphore(data_4ebe314, 1, nullptr)
HANDLE hObject = data_4ebe314

if (hObject != 0)
    CloseHandle(hObject)
    data_4ebe314 = 0

int32_t result = data_4ebe300

if (result != 0)
    result = j__free(result)
    data_4ebe300 = 0
    data_4ebe304 = 0
    data_4ebe308 = 0

return result
