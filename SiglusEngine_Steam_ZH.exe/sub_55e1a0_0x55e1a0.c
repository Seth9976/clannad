// 函数: sub_55e1a0
// 地址: 0x55e1a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
HANDLE esi = *arg1

if (esi != 0)
    WaitForSingleObject(esi, 0xffffffff)

char eax = arg1[0xe].b
var_8:3.b = eax

if (esi != 0)
    ReleaseSemaphore(esi, 1, nullptr)
    eax = var_8:3.b

if (eax == 0)
    return 0

HANDLE esi_1 = *arg1

if (esi_1 != 0)
    WaitForSingleObject(esi_1, 0xffffffff)

char ebx = arg1[0x13].b

if (esi_1 != 0)
    ReleaseSemaphore(esi_1, 1, nullptr)

int32_t eax_2
eax_2.b = ebx != 0
return eax_2 + 1
