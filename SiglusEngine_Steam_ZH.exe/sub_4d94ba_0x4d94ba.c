// 函数: sub_4d94ba
// 地址: 0x4d94ba
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* i = arg1
char* ecx = arg4

if (i == 0)
    return i

int32_t edi
int32_t var_c_1 = edi

do
    if (i == arg2)
        ecx -= 1
        ecx[arg3] = 0x2e
    
    int32_t edx_1 = 0
    uint8_t temp1_1 = (modu.dp.d(edx_1:i, 0xa)).b
    i = divu.dp.d(edx_1:i, 0xa)
    ecx -= 1
    ecx[arg3] = temp1_1 + 0x30
while (i u> 0)

return arg4 - ecx
