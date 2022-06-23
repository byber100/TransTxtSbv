#pragma once

// Ό³Έν :
class TransDirectory
{
public:
	// constrcuter destructer
	TransDirectory();
	~TransDirectory();

	// delete Function
	TransDirectory(const TransDirectory& _Other) = delete;
	TransDirectory(TransDirectory&& _Other) noexcept = delete;
	TransDirectory& operator=(const TransDirectory& _Other) = delete;
	TransDirectory& operator=(TransDirectory&& _Other) noexcept = delete;

protected:

private:

};

