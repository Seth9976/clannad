// 函数: sub_6b95c0
// 地址: 0x6b95c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
TEB* fsbase
void* esi = *fsbase->ThreadLocalStoragePointer

if (*(esi + 4) == 0)
    int32_t* eax_1
    eax_1, ecx = sub_745f3f(0xc)
    
    if (eax_1 == 0)
        eax_1 = nullptr
    else
        *eax_1 = 0
        eax_1[1] = 0
        eax_1[2] = 0
    
    *(esi + 4) = eax_1

int32_t* esi_1 = *(esi + 4)
int32_t var_10 = var_8
int32_t var_14 = ecx
sub_6ba130(*esi_1, esi_1[1])
int32_t result = *esi_1
esi_1[1] = result
return result
