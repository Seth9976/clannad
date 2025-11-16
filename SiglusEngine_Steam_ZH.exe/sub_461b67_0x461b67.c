// 函数: sub_461b67
// 地址: 0x461b67
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* eax = arg2
void* edx = &eax[1]
char i

do
    i = *eax
    eax = &eax[1]
while (i != 0)
int32_t eax_2 = sub_745f3f(eax - edx + 1)

if (eax_2 == 0)
    return 0x8007000e

int32_t edi
int32_t var_10_1 = edi
int32_t esi_2
int32_t edi_2
edi_2, esi_2 = __builtin_memcpy(eax_2, arg2, (eax - edx + 1) u>> 2 << 2)
__builtin_memcpy(edi_2, esi_2, (eax - edx + 1) & 3)
HANDLE hObject =
    CreateFileA(arg2, 0x40000000, FILE_SHARE_NONE, nullptr, CREATE_ALWAYS, 0x8000080, nullptr)
int32_t result

if (hObject != 0xffffffff)
    void*** eax_3 = sub_745f3f(0x60)
    void*** esi_4
    
    if (eax_3 == 0)
        esi_4 = nullptr
    else
        esi_4 = sub_461a40(eax_3, arg1, eax_2, hObject, arg3 & 1, arg3 u>> 1 & 1)
    
    if (esi_4 != 0)
        sub_4610aa(esi_4)
        *arg4 = esi_4
        result = 0
    else
        CloseHandle(hObject)
        DeleteFileA(arg2)
        j__free(eax_2)
        result = 0x8007000e
else
    j__free(eax_2)
    result = 0x8876038f

return result
