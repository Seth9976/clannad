// 函数: sub_6b9620
// 地址: 0x6b9620
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
TEB* fsbase
void* edi = *fsbase->ThreadLocalStoragePointer
int32_t* ebx = arg1

if (*(edi + 4) == 0)
    int32_t* eax_1
    eax_1, arg1 = sub_745f3f(0xc)
    
    if (eax_1 == 0)
        eax_1 = nullptr
    else
        *eax_1 = 0
        eax_1[1] = 0
        eax_1[2] = 0
    
    *(edi + 4) = eax_1

int32_t* esi = *(edi + 4)
int32_t* var_18 = var_8
int32_t* var_1c = arg1
sub_6ba130(*esi, esi[1])
struct _EXCEPTION_REGISTRATION_RECORD*** ecx_1 = *(edi + 4)
esi[1] = *esi
return sub_6b9ef0(ecx_1, ebx)
