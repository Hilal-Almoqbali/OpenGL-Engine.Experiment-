#pragma once
#include<stdio.h>


extern Engine::Application* Engine::CreateApplication();//ÓÉclientÉú³É

int main(int argc,char **argv) {
	printf("Hello, Engine!");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
	return 0;
}



