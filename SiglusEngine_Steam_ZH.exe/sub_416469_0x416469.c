// 函数: sub_416469
// 地址: 0x416469
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx

if (data_b95b18 != 0)
    return 

int32_t edi
int32_t var_14_1 = edi
data_b95b18 = 1
int32_t var_8_1 = 0
int32_t eax_1 = sub_745f3f(0)
int32_t eax_2 = sub_745f3f(0)

if (eax_1 == 0 || eax_2 == 0 || eax_1 == eax_2)
    var_8_1 = 1

if (eax_1 != 0)
    j__free(eax_1)

if (eax_2 != 0 && eax_2 != eax_1)
    j__free(eax_2)

j__free(0)

if (var_8_1 == 0)
    return 

OutputDebugStringA("
    D3DX: (WARN) Overloaded ::new and ::delete operators do not conform to C++ standards:\r\n")
OutputDebugStringA("
    D3DX: (WARN) An allocation of zero bytes should return a unique non-null pointer to at\r\n")
OutputDebugStringA("
    D3DX: (WARN) least zero bytes. Deletion of a null pointer should quietly do nothing.\r\n")
OutputDebugStringA("D3DX: (WARN) D3DX relies upon this behavior.\r\n")
