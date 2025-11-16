// 函数: sub_416511
// 地址: 0x416511
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 4)

if (eax != 0 && *(arg1 + 0x38) != 0)
    j__free(eax)

int32_t result = *(arg1 + 8)

if (result != 0 && *(arg1 + 0x3c) != 0)
    result = j__free(result)

int32_t edi
int32_t var_8_3 = edi
int32_t edi_1 = *(arg1 + 0x4c)

if (edi_1 != 0)
    sub_416511()
    result = j__free(edi_1)

int32_t esi_1 = *(arg1 + 0x50)

if (esi_1 != 0)
    sub_416511()
    result = j__free(esi_1)

return result
