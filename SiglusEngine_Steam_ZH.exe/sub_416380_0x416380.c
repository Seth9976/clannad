// 函数: sub_416380
// 地址: 0x416380
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HKEY ecx
HKEY var_8 = ecx
bool cond:0 = data_b95b14 != 0
int32_t result = data_b95b0c
data_b95b0c = arg1

if (not(cond:0) && data_b95b10 == 0)
    int32_t edi
    int32_t var_14_1 = edi
    
    if (GetModuleHandleA("d3d9.dll") != 0)
        HMODULE hModule = LoadLibraryA("d3d9.dll")
        
        if (hModule != 0)
            data_b95b14 = GetProcAddress(hModule, "DebugSetMute")
    
    HMODULE eax_3
    eax_3, ecx = GetModuleHandleA("d3d9d.dll")
    
    if (eax_3 != 0)
        HMODULE hModule_1
        hModule_1, ecx = LoadLibraryA("d3d9d.dll")
        
        if (hModule_1 != 0)
            int32_t eax_4
            eax_4, ecx = GetProcAddress(hModule_1, "DebugSetMute")
            data_b95b10 = eax_4

if (data_b4e310 != 0xffffffff)
    goto label_41643b

int32_t __saved_ebx_1 = 4
int32_t* __saved_esi_1 = &data_b4e310
int32_t eax_5 = sub_416093(ecx, REG_DWORD, "D3DXDoNotMute")

if (eax_5 == 0)
    data_b4e310 &= eax_5

if (data_b4e310 == 0)
    goto label_416444

data_b4e310 = 1
label_41643b:

if (data_b4e310 == 0)
label_416444:
    int32_t eax_6 = data_b95b14
    
    if (eax_6 != 0)
        eax_6(arg1, result)
    
    int32_t eax_7 = data_b95b10
    
    if (eax_7 != 0)
        eax_7(arg1, result)

return result
