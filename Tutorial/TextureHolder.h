#pragma once
#include "stdafx.h"
#include <map>
#include <memory>
#include <SFML/Graphics.hpp>
using namespace std;


namespace Textures {
	enum ID { Landscape, Airplane, Missle};

	class TextureHolder
	{
	public:
		void				load(Textures::ID id, const std::string& filename);
		sf::Texture&		get(Textures::ID id);
		const sf::Texture&	get(Textures::ID id) const;
		

	private:
		std::map<Textures::ID,
			std::unique_ptr<sf::Texture>> mTextureMap;
	};

	TextureHolder::TextureHolder()
	{
	}

	TextureHolder::~TextureHolder()
	{
	}
}
