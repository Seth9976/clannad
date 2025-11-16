// 函数: sub_6c48f0
// 地址: 0x6c48f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* esi = arg1
LRESULT i

do
    HWND hWnd = *(esi + 4)
    
    if (hWnd == 0)
        break
    
    i, arg1 = SendMessageW(hWnd, 0x101c, 0, 0)
while (i != 0)
void* var_14 = var_8
void* var_18 = arg1
sub_55d500(*(esi + 0x90), *(esi + 0x94))
int32_t result = *(esi + 0x90)
*(esi + 0x94) = result
return result
