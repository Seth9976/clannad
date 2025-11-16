// 函数: sub_5d68d0
// 地址: 0x5d68d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t eax = arg2
void* ecx_1 = *(arg1 + 0xa0) * 0xfc + data_bac510

if (eax == 0xfffffffe)
    eax = *(ecx_1 + 0xa2ec1c)

int32_t edi = arg3

if (edi == 0xfffffffe)
    edi = *(ecx_1 + 0xa2ec88)

sub_5e2420(arg1 + 0x234, eax, arg4)
sub_5d91e0(arg1)
sub_5e2420(arg1 + 0xf28, edi, arg4)
return sub_5d92d0(arg1)
