// 函数: sub_429409
// 地址: 0x429409
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

struct MEMORY_MAPPED_VIEW_ADDRESS lpBaseAddress = arg1[2]
int32_t edi
int32_t var_8 = edi

if (lpBaseAddress != 0)
    UnmapViewOfFile(lpBaseAddress)
    arg1[2] = 0
    arg1[3] = 0

HANDLE hObject = arg1[1]

if (hObject != 0xffffffff)
    CloseHandle(hObject)
    arg1[1] = 0xffffffff

HANDLE hObject_1 = *arg1

if (hObject_1 != 0xffffffff)
    CloseHandle(hObject_1)
    *arg1 = 0xffffffff

return 0
